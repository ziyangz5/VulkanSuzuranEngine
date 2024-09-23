//
// Created by xshuj on 9/23/2024.
//
#ifndef VULKANSUZURANENGINE_VSE_WINDOW_HPP
#define VULKANSUZURANENGINE_VSE_WINDOW_HPP
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace vse {

    class VseWindow
    {
    public:
        VseWindow(int w, int h, std::string name);
        ~VseWindow();

        bool shouldClose() { return glfwWindowShouldClose(window);}
    private:
        GLFWwindow *window;
        const int width;
        const int height;

        std::string windowName;
        void initWindow();


    };

}

#endif //VULKANSUZURANENGINE_VSE_WINDOW_HPP
