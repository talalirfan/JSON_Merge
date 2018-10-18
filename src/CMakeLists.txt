cmake_minimum_required(VERSION 3.10.2)
project (Merge_JSON)

#addpackage(nlohmann_json)

#set( CMAKE_CXX_FLAGS "-DJSON_MultipleHeaders" )
set(THIRD_PARTY_SOURCE_DIR ${CMAKE_SOURCE_DIR}/thirdparty)



include_directories(${THIRD_PARTY_SOURCE_DIR}/json/include)
include_directories(${THIRD_PARTY_SOURCE_DIR}/json/include/nlohmann)





#include_directories(../thirdparty/json/include)
#find_package(nlohmann_json CONFIG REQUIRED)

#include_directories(${CMAKE_SOURCE_DIR}/src)


# Local header files here ONLY
SET(TARGET_H
    MergeFile.h    
   )

# Local source files here
SET(TARGET_SRC
    MergeFile.cpp
    )

file(GLOB SOURCES "*.cpp")
add_executable(main ${SOURCES})
#target_link_libraries(main nlohmann_json)

#add_executable(merge main.cpp)
