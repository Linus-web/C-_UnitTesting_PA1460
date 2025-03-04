#include "pch.h"
#include <string>

class Cat
{
public:
	Cat();
	Cat(int age, const std::string& name, const std::string& color);
	~Cat();

	std::string getName() const;
	std::string getColor() const;
	int getAge();

	std::string description() const;

private:
	int age;
	std::string name;
	std::string color;

};
