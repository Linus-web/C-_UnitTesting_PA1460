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
    obj->performInteraction(0);  // Execute "Attack"
    obj->performInteraction(1);  // Execute "PickUp with Force"

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
