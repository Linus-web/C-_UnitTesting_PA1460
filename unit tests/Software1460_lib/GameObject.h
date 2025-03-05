#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
#include "Interaction.h"
#include <vector>
#include <string>

class GameObject {
public:
    GameObject(const std::string& name) : name(name) {}

    void addInteraction(Interaction* interaction) {
        interactions.push_back(interaction);
    }

    const std::string& getName() const {
        return name;
    }

    void performInteraction(int index) {
        if (index >= 0 && index < interactions.size()) {
            interactions[index]->execute();
        }
    }

private:
    std::string name;
    std::vector<Interaction*> interactions;  // List of interactions available to this object
};

#endif // !GAME_OBJECT_H
