# origami
`origami` is a lightweight, modular game engine built on top of SDL3.

# Instructions

## Build
To build the project, you need to have CMake and vcpkg installed.

You can build the project using the following commands:

```bash
cmake --toolchain=/path/to/vcpkg.cmake && make
```

## Testing
To run the tests for a specific module, run the following command after building the project:

```bash
./test.sh <module_name>
```

This will rebuild the project any time changes are detected and run the tests for the specified module.

# Project Goals
* Superior developer experience
* Fast build times
* Thoroughly documented
* High test coverage

# Acknowledgements
* Gustavo Pezzi's [C++ Game Engine Programming course](https://pikuma.com/courses/cpp-2d-game-engine-development) on Pikuma was the basis for many of the concepts in this project.
