cmake_minimum_required(VERSION 3.3)
project(TestWxWidgets2)
aux_source_directory(. SRC_LIST)
set(wxWidgets_ROOT_DIR "C:/wxWidgets-3.1.0/")
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)



set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp TestWxFrame.cpp TestWxFrame.h TestWxWidgets.cpp TestWxWidgets.h)

include(${wxWidgets_USE_FILE})

add_executable(TestWxWidgets2 ${SOURCE_FILES} ${SRC_LIST} TestWxFrame.cpp TestWxFrame.h)
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})