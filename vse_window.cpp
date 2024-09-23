//
// Created by xshuj on 9/23/2024.
//
#include "vse_window.hpp"

#include <utility>

namespace vse {
    VseWindow::VseWindow(int w, int h, std::string name): width(w), height(h), windowName(name)
    {
        initWindow();
    }
    VseWindow::~VseWindow()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void VseWindow::initWindow()
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}