# RangeCountTest/CMakeLists.txt
# Created by Robin Rowe 2022-01-31
# License: MIT License

cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(RangeCountTest)
message("Configuring ${PROJECT_NAME}...")
enable_testing()
file(STRINGS sources.cmake SOURCES)
add_library(${PROJECT_NAME}_lib ${SOURCES})
link_libraries(${PROJECT_NAME}_lib)
if(NOT WIN32 AND NOT APPLE)
	link_libraries(rt pthread)
endif(NOT WIN32 AND NOT APPLE)

option(UNISTD "Enable libunistd" false)
if(UNISTD)
	set(LIBUNISTD_PATH /code/github/libunistd)
	if(WIN32)
		include_directories(${LIBUNISTD_PATH}/unistd)
		link_directories(${LIBUNISTD_PATH}/build/unistd/Release)
		link_libraries(libunistd)
	endif(WIN32)
endif(UNISTD)

option(FLTK "Enable FLTK" false)
if(FLTK)
	set(FLTK_PATH /Code/fltk)
	include_directories(${FLTK_PATH} ${FLTK_PATH}/fltk-build ${FLTK_PATH}/fltk-src/)
	link_directories(${FLTK_PATH}/fltk-src/build/lib/Debug)
	set(FLTK_LIBS
		fltk_formsd
		fltk_gld
		fltk_imagesd
		fltk_jpegd
		fltk_pngd
		fltk_zd
		fltkd
	)
	link_libraries(${FLTK_LIBS} comctl32)
endif(FLTK)

add_executable(test_Database test/test_Database.cpp)
add_test(test_Database test_Database)
add_executable(test_Composer test/test_Composer.cpp)
add_test(test_Composer test_Composer)
add_executable(test_Name test/test_Name.cpp)
add_test(test_Name test_Name)
add_executable(test_Lifetime test/test_Lifetime.cpp)
add_test(test_Lifetime test_Lifetime)
add_executable(test_RangeCount test/test_RangeCount.cpp)
add_test(test_RangeCount test_RangeCount)
add_executable(test_Blob test/test_Blob.cpp)
add_test(test_Blob test_Blob)

add_executable(range_count range_count.cpp)
add_executable(test_Matrix test/test_Matrix.cpp)
add_test(test_Matrix test_Matrix)
add_executable(test_Row test/test_Row.cpp)
add_test(test_Row test_Row)
add_executable(test_YearCount test/test_YearCount.cpp)
add_test(test_YearCount test_YearCount)
