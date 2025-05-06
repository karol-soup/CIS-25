cmake_minimum_required (VERSION 3.21)
project(KitchenCalculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_subdirectory (extern/googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Source files
set(SOURCES
    src/intoFL.cpp
    src/convertUnit.cpp
    src/getValidInput.cpp
    src/inputAmount.cpp
    src/display.cpp
    src/displayResult.cpp
    src/inputDesired.cpp
    src/inputStart.cpp
)

#main
add_executable(main_exec main.cpp ${SOURCES})
	
 #test
add_executable(test_exec
		test/test_main.cpp ${SOURCES})

target_link_libraries(test_exec gtest gtest_main)

enable_testing()
add_test (NAME allTests COMMAND test_exec)
