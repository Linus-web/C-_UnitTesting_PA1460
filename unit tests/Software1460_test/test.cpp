#include "pch.h"
#include "../Software1460_lib/Game.h"
#include "../Software1460_lib/GameObject.h"
#include "../Software1460_lib/InteractionType.h"
#include "../Software1460_lib/InteractionOption.h"
#include <iostream>
#include <sstream>

TEST(GameInteractionTest, Test_PositiveInteraction) {
    
    Game game;
    Scene scene;
    game.addScene(&scene);

    GameObject* hero = new GameObject("Hero");
    Interaction* attack = new InteractionType("Attack");
    Interaction* pickUp = new InteractionOption("PickUp", "With Force");

    hero->addInteraction(attack);
    hero->addInteraction(pickUp);

    scene.addObject(hero);

    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

    hero->performInteraction(0);
    hero->performInteraction(1);  

    std::string output = buffer.str();
    ASSERT_NE(output.find("Executing interaction: Attack"), std::string::npos);
    ASSERT_NE(output.find("Executing PickUp with option: With Force"), std::string::npos);

    std::cout.rdbuf(old);
}

