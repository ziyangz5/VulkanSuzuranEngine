cmake_minimum_required(VERSION 3.19)
project(VulkanSuzuranEngine)
include_directories("C:\\Users\\xshuj\\lib\\glm-0.9.9.8\\glm")
include_directories(glm/include)
find_package(Vulkan REQUIRED)
set(CMAKE_CXX_STANDARD 17)
add_subdirectory(glfw)

add_executable(VulkanSuzuranEngine main.cpp
        vse_window.hpp
        vse_window.cpp
        vse_window.cpp
        first_app.cpp
        first_app.hpp)
target_link_libraries(${PROJECT_NAME} PUBLIC glfw Vulkan::Vulkan)