//
//  Game.hpp
//  SFMLXcode
//
//  Created by Kenrick Halff on 23/10/15.
//  Copyright © 2015 Kenrick Halff. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <SFML/Graphics.hpp>

class Game {
    
public:
    Game();
    void run();
    
private:
    void processEvents();
    void handlePlayerInput(sf::Keyboard::Key, bool);
    void update(sf::Time);
    void render();
    
private:
    sf::RenderWindow mWindow;
    sf::CircleShape mPlayer;
    bool mIsMovingUp = false,
         mIsMovingDown = false,
         mIsMovingLeft = false,
         mIsMovingRight = false;
};

#endif /* Game_hpp */
