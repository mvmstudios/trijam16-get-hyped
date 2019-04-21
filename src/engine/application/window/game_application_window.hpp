#ifndef _GAME_APPLICATION_WINDOW_H_
#define _GAME_APPLICATION_WINDOW_H_

#include <string>

namespace Game { namespace Engine { namespace Application { namespace Window {
    class GameApplicationWindow {
        private:

        public:
            GameApplicationWindow(GameApplicationWindowProperties windowProperties);
            ~GameApplicationWindow();
    };

    struct GameApplicationWindowProperties {
        std::string title;
        
        int width;
        int height;

        int x;
        int y;

    };

}}}}

#endif