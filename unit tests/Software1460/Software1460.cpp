// Software1460.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Software1460_lib/Game.h"
#include "../Software1460_lib/InteractionType.h"
#include "../Software1460_lib/InteractionOption.h"
int main()
{
    // Create game and scene
    Game game;
    Scene scene;
    game.addScene(&scene);

    // Create a GameObject
    GameObject* obj = new GameObject("Hero");

    // Create interactions
    Interaction* attack = new InteractionType("Attack");
    Interaction* pickUp = new InteractionOption("PickUp", "With Force");

    // Add interactions to GameObject
    obj->addInteraction(attack);
    obj->addInteraction(pickUp);

    // Add GameObject to the scene
    scene.addObject(obj);

    // Game starts
    game.startGame();

    // Perform interactions on the object
    obj->performInteraction(0);  
    obj->performInteraction(1);  

    return 0;
}


