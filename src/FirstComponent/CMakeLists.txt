cmake_minimum_required(VERSION 2.8.11)

set(FirstComponentSources 
		FirstComponentBase.cpp
		FirstComponentBase.h
		FirstComponentImpl.cpp
		FirstComponentImpl.h
		IFirstComponent.cpp
		IFirstComponent.h
)
add_library(FirstComponent STATIC ${FirstComponentSources})

