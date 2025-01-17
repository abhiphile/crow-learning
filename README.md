# Crow C++ Framework

Crow is a C++ micro web framework that allows for quick development of web applications. It combines the ease of Python Flask with the performance of C++.

## Learning Crow C++

### Prerequisites

- **C++ Compiler**: Ensure you have a C++11 compatible compiler installed.
- **CMake**: A build system generator to compile the project.
- **Git**: To clone the Crow repository.

### Installing Crow

1. **Clone the Crow Repository**:
   ```bash
   git clone https://github.com/CrowCpp/Crow.git
   cd Crow
   ```

2. **Build the Crow Library**:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   sudo make install
   ```

### Writing a Simple Crow Application

Here's a simple example of a Crow application:

```cpp
#include "crow.h"

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([]() {
        return "Hello, Crow!";
    });

    app.port(8080).multithreaded().run();
}
```

### Building and Running Your Crow Application

1. **Create Your Project Structure**:

   ```bash
   mkdir my_crow_project
   cd my_crow_project
   mkdir src
   touch src/main.cpp
   ```

   Place your Crow application code in `src/main.cpp`.

2. **Create a `CMakeLists.txt` File**:

   In your `my_crow_project` directory, create a `CMakeLists.txt` file with the following content:

   ```cmake
   cmake_minimum_required(VERSION 3.10)
   project(MyCrowProject)

   set(CMAKE_CXX_STANDARD 11)

   find_package(Crow REQUIRED)

   add_executable(my_crow_app src/main.cpp)

   target_link_libraries(my_crow_app Crow::Crow)
   ```

3. **Build the Project**:

   Run the following commands to build your project using CMake:

   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

4. **Run the Program**:

   After building, you can run your application with:

   ```bash
   ./my_crow_app
   ```

   Your application will start, and you can visit `http://localhost:8080` in your browser to see the result.

## Conclusion

Crow is a powerful framework for developing high-performance web applications in C++. By following this guide, you can set up, build, and run a basic Crow application using CMake. Explore more advanced features and create robust web services using Crow!
