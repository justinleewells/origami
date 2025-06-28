# Decisions
This is just a list of decisions made during the development of this project that can shed light on the design choices and architecture.

* [vcpkg](https://github.com/microsoft/vcpkg) is used for dependency management due to its ease of use and wide support for libraries.
* [gtest](https://google.github.io/googletest/) is used for unit testing because it's an industry standard. I also tried to use doctest, but it didn't work well with the way the project is structured.
