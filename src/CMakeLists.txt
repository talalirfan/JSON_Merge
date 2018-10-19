cmake_minimum_required(VERSION 3.10.2)
project (Merge_JSON)

#addpackage(nlohmann_json)

#set( CMAKE_CXX_FLAGS "-DJSON_MultipleHeaders" )


set(THIRD_PARTY_SOURCE_DIR ${CMAKE_SOURCE_DIR}/thirdparty)



include_directories(${THIRD_PARTY_SOURCE_DIR}/json/include)
include_directories(${THIRD_PARTY_SOURCE_DIR}/json/include/nlohmann)
include_directories(${THIRD_PARTY_SOURCE_DIR}/boost_1_68_0)
include_directories(${THIRD_PARTY_SOURCE_DIR}/boost_1_68_0/boost/program_options)


set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
find_package(Boost REQUIRED COMPONENTS program_options) 

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
    #add_executable(progname file1.cxx file2.cxx) 
    #target_link_libraries(progname ${Boost_LIBRARIES})
endif()



#include_directories(../thirdparty/json/include)
#find_package(nlohmann_json CONFIG REQUIRED)

#include_directories(${CMAKE_SOURCE_DIR}/src)


# Local header files here ONLY
SET(TARGET_H
    MergeFile.h
program_options.hpp    
   )

# Local source files here
SET(TARGET_SRC
    MergeFile.cpp
    )

file(GLOB SOURCES "*.cpp")
add_executable(merge ${SOURCES})
target_link_libraries(merge ${Boost_LIBRARIES})

#add_executable(merge main.cpp)
