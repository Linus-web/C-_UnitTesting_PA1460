#include "pch.h"
#include "../Software1460_lib/Game.h"
#include "../Software1460_lib/Scene.h"
#include "../Software1460_lib/GameObject.h"

TEST(SceneInteractionTest, Test_NegativeInteraction_ObjectNotFound) {
    Game game;
    Scene scene;
    game.addScene(&scene);

    GameObject* hero = new GameObject("Hero");

    GameObject* foundObject = scene.findObjectByName("Hero");

    ASSERT_EQ(foundObject, nullptr);

    ASSERT_THROW(foundObject->performInteraction(0), std::runtime_error);  // Should throw runtime error due to nullptr
}
