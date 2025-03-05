#ifndef SCENE_H
#define SCENE_H
#include "GameObject.h"

class Scene {
public:
    void addObject(GameObject* obj) {
        gameObjects.push_back(obj);
    }

    GameObject* findObjectByName(const std::string& name) {
        for (auto& obj : gameObjects) {
            if (obj->getName() == name) {
                return obj;
            }
        }
        return nullptr;
    }

private:
    std::vector<GameObject*> gameObjects;  // List of GameObjects in the scene
};
#endif // !SCENE_H
