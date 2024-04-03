#include "fmt/format.h"
#include "virtual/example.h"
#include <iostream>


Human::Human(std::string name, unsigned age) : name(name), age(age) { std::cout << "Human\n"; }

void Human::getInfo() const
{
    std::cout << fmt::format("name: {}, age: {}\n", name, age);
}

Professor::Professor(std::string name, unsigned age, DEGREE degree) : Human(name, age), degree(degree) { std::cout << "Professor\n"; }
void Professor::getInfo() const
{
    Human::getInfo();
    std::cout << fmt::format("degree: {}\n", static_cast<int>(degree));
}

Student::Student(std::string name, unsigned age, std::string group, double score) : Human(name, age), group(group), score(score) { std::cout << "Student\n"; }

void Student::getInfo() const
{
    Human::getInfo();
    std::cout << fmt::format("group: {}, score: {}\n", group, score);
}

Assistant::Assistant(std::string name, unsigned age, std::string group, double score, DEGREE degree) :  Human(name, age), Student(name, age, group, score), Professor(name, age, degree) { std::cout << "Assistant\n"; }

void Assistant::getInfo() const
{
    Student::getInfo();
    Professor::getInfo();
}