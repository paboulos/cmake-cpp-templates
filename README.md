# Basic Demo for a CMake C++ Project Structure  

- Creates one executable and one library
- Contains some common static analysis tools
- The configured directory passes a C++ config file as input to CMake to generates a C++ project description file.  
  It will be saved in the build directory.
- Cmake scripts go in the cmake subdirectory
- Uses some third-party modules like nlohmann_json and SFML.
  - The external CMake projects are downloaded into build dir from GitHub using FetchContent feature.  
- Creates a geometry library that demonstrates a more advanced feature of C++ by using class and function templates.
  - Uses a template specialization and Type Traits to enable a Repair Method located in 2d_compute.hpp.  
- Care must be taken on where and how the template classes are declared and defined otherwise the linker will not be able to resolve the created class types.  
- The geometry library uses two namespaces: Geometry and Inventory.  
- Resolution of the geometry types are done with these namespaces.  

## Prequisites

- Required Packages

  1. Git
  2. GCC and/or Clang compiler
  3. Ninja
  4. Cmake

## Introduction  

- CMake is cross-platform tool. The process of creating a CMake project has three stages:
    1. Configuration
    2. Generation
    3. Building

  - CMakeLists.txt is the main configuration file. The Generation stage depends on the toolchain packages that are installed in the OS (e.g. Generators for gcc, ninja, etc...).  
  - The directory tree contains source code files, where the root folder contains a top level CMakeLists.txt file.
  - CMake will generate a CMakeCache.txt file in the source tree to maintain the state of the project.
    - Cache variables are generated from listfiles and stored in CMakeCache.
  - CMake will generate a Makefile for GNU Make in the source tree.
    - When CMake generates a buildsystem, it "compiles" list files from CMake to the language of a chosen build tool.
    - Makefiles have their own targets, some are direct conversions of list file targets, and others are created implicitly. One such buildsystem target is ALL, which CMake generates by default to contain all top-level list file targets, such as executables and libraries.
  - Every subfolder requires a CMakeLists.txt file for it to be managed by CMake.  
  - Other configuration artifacts, like scripts go in the source tree. Generation creates the buildsystem artifacts, which might reside in source or build trees.
  - Building produces the final artifacts, such as binaries, testing, and packages. This building stage is isolated to the build tree.

- Use the CMake help manual for options  
  ```cmake --help```  

- Verify CMake System Settings  
  ```cmake --version```  
  ```cmake --system-inforamtion```  
  ```cmake --check-system-vars```  

- A project build system is generated from the configuration files with the command:  
  ```cmake -B <build tree> -S <source tree>```  

- Once a project is setup by CMake the binaries are built using the command:  
  ```cmake --build <build tree>```

## Basic Commands for this Project from a Linux Terminal

- After the project is cloned from github  
  ```cd cpp_datastructures```  
  ```mkdir build```  
  ```cmake -B ./build -S . -DCMAKE_BUILD_TYPE=Debug```  
  ```cmake --build ./build --clean-first -v```  

- Run the executable  
  ```./build/bin/Executable```
