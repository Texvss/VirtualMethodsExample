#include "fmt/format.h"
#include "virtual/example.h"
#include <iostream>


Human::Human(std::string name, unsigned age) : name(name), age(age) {}

void Human::getInfo() const
{
    std::cout << fmt::format("name: {}, age: {}\n", name, age);
}

Professor::Professor(std::string name, unsigned age, DEGREE degree) : Human(name, age), degree(degree) {}
void Professor::getInfo() const
{
    Human::getInfo();
    std::cout << fmt::format("degree: {}", static_cast<int>(degree));
}