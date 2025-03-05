#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include <string>
#include "pch.h"
#include "Scene.h"

class GameObject;
class Interaction;

// Game class manages the game state
class Game {
public:
    void addScene(Scene* scene) {
        scenes.push_back(scene);
    }

    void startGame() {
        std::cout << "Game started!" << std::endl;
    }

private:
    std::vector<Scene*> scenes;  // List of scenes in the game
};
#endif // !GAME_H
