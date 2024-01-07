cmake_minimum_required(VERSION 3.10)  # Specify the minimum version for CMake

project(MyProgram)  # Name your project

# Create an executable with the name "MyFirstProgram" from the file "main.c"
add_executable(MyProgram main.cpp)

# Add compile options with strict warnings
if(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
  # Using GCC
  target_compile_options(MyProgram PRIVATE -Wall -Wextra -Werror)
elseif(MSVC)
  # Using Visual Studio C++
  target_compile_options(MyProgram PRIVATE /W4 /WX)
else()
  message(STATUS "Unknown compiler, no specific flags set for strict warnings")
endif()
