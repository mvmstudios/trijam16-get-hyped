#ifndef _GAME_APPLICATION_H_
#define _GAME_APPLICATION_H_

#include "window/game_application_window.hpp"

namespace Game { namespace Engine { namespace Application {
        
    class GameApplication {
        private:
            Window::GameApplicationWindow window;

        public:
            void runApp();
    };

}}}

#endif