cmake_minimum_required(VERSION 3.10)

project(dz4 CXX)

add_executable(dz4
    main.cpp
    
    
    
    std.cpp
    min.cpp
    max.cpp
    mean.cpp
   )

target_include_directories(dz4 PRIVATE include)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(dz4 PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(dz4 PRIVATE
        /EHsc
        /W4
        /WX
    )
endif()

target_compile_features(dz4 PUBLIC cxx_std_17)