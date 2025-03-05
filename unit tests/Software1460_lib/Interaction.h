#ifndef INTERACTION_H
#define INTERACTION_H
#include <iostream>
#include <vector>
#include <string>
#include "pch.h"
class Interaction {
public:
    virtual void execute() = 0;  // Pure virtual function to be implemented by derived classes
};
#endif // !INTERACTION_H




