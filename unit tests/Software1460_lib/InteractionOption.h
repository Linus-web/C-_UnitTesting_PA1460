#ifndef INTERACTION_OPTION_H  // Ensure this is at the very top
#define INTERACTION_OPTION_H

#include "InteractionType.h"
#include <string>
#include <iostream>

class InteractionOption : public InteractionType {
public:
    InteractionOption(const std::string& name, const std::string& option)
        : InteractionType(name), optionName(option) {
    }

    void execute() override {
        std::cout << "Executing " << interactionName << " with option: " << optionName << std::endl;
    }

private:
    std::string optionName;
};

#endif // INTERACTION_OPTION_H
