//
// Created by xshuj on 9/23/2024.
//

#include "first_app.hpp"

namespace vse {
    void FirstApp::run()
    {
        while (vseWindow.shouldClose())
        {
            glfwPollEvents();

        }
    }
} // vse