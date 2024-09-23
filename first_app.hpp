//
// Created by xshuj on 9/23/2024.
//

#ifndef VULKANSUZURANENGINE_FIRST_APP_HPP
#define VULKANSUZURANENGINE_FIRST_APP_HPP
#include "vse_window.hpp"

namespace vse {

    class FirstApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;
        void run();
    private:
        VseWindow vseWindow{WIDTH,HEIGHT,"Hello Vulkan"};
    };

} // vse

#endif //VULKANSUZURANENGINE_FIRST_APP_HPP
