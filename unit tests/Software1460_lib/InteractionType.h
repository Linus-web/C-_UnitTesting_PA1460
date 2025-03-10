#ifndef INTERACTION_TYPE_H
#define INTERACTION_TYPE_H
#include "Interaction.h"

class InteractionType : public Interaction {
public:
    InteractionType(const std::string& name) : interactionName(name) {}

    void execute() override {
        std::cout << "Executing interaction: " << interactionName << std::endl;
    }

protected:
    std::string interactionName;
};

#endif // !INTERACTION_TYPE_H
