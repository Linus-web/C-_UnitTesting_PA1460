#include "pch.h"
#include "Cat.h"

Cat::Cat() :
	age(0), name("unknown"), color("unknown")
{
}

Cat::Cat(int age, const std::string& name, const std::string& color) :
	age(age), name(name), color(color)
{
}

Cat::~Cat()
{
}

std::string Cat::getName() const
{
	return this->name;
}

std::string Cat::getColor() const
{
	return this->color;
}

int Cat::getAge()
{
	return this->age;
}

std::string Cat::description() const
{
	return "| Name: " + this->name + "\n| Color: " + this->color + "\n| Age: " + std::to_string(this->age);
} 
