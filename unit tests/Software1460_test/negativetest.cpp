#include "pch.h"
#include "../Software1460_lib/Game.h"
#include "../Software1460_lib/GameObject.h"
#include "../Software1460_lib/InteractionType.h"
#include "../Software1460_lib/InteractionOption.h"


//Negative test 1
TEST(GameInteractionTest, Test_NegativeInteraction_InvalidIndex) {
    Game game;
    Scene scene;
    game.addScene(&scene);

    GameObject* hero = new GameObject("Hero");
    Interaction* attack = new InteractionType("Attack");
    Interaction* pickUp = new InteractionOption("PickUp", "With Force");

    hero->addInteraction(attack);
    hero->addInteraction(pickUp);

    scene.addObject(hero);

    // Test invalid index (out-of-bounds)
    ASSERT_THROW(hero->performInteraction(5), std::out_of_range);  // Index 5 is invalid (only 2 interactions)
}
