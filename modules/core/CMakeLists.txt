file(GLOB_RECURSE SOURCES src/*.cpp src/*.h)
list(FILTER SOURCES EXCLUDE REGEX ".*_test.cpp")
add_library(core STATIC ${SOURCES})

set_target_properties(core
  PROPERTIES
  PREFIX ""
)

install(TARGETS core
        LIBRARY DESTINATION core
        ARCHIVE DESTINATION core)

# Test

file(GLOB_RECURSE TEST_SOURCES src/*_test.cpp)
add_executable(core_test ${TEST_SOURCES} ${SOURCES})

find_package(GTest REQUIRED)
target_link_libraries(core_test PRIVATE GTest::gtest_main)

gtest_discover_tests(core_test)
