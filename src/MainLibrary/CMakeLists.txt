cmake_minimum_required(VERSION 2.8.11)

set(MainLibrarySources
		MainLibrary.cpp
		MainLibrary.h
	)

add_library(MainLibrary SHARED ${MainLibrarySources})
target_link_libraries(MainLibrary PRIVATE FirstComponent)
