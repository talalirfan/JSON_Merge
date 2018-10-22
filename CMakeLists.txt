cmake_minimum_required(VERSION 3.10.2)
project (Merge_JSON)




set(THIRD_PARTY_SOURCE_DIR ${CMAKE_SOURCE_DIR}/thirdparty)
set(PROJECT_SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)



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

endif()



file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/*.cpp)
add_executable(merge ${SOURCES})
target_link_libraries(merge ${Boost_LIBRARIES})


