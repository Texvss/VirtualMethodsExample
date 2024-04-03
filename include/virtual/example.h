#ifndef VIRTUAL_EXAMPLE
#define VIRTUAL_EXAMPLE

#include <string>

enum class DEGREE
{
    NonDegree,
    PhD,
    Doctor
};
class Human
{
private:
    std::string name;
    unsigned age;

public:
    Human(std::string name, unsigned age = 20);
    virtual  void getInfo() const;
};


class Professor : virtual public Human
{
private:
    DEGREE degree;

public:
    Professor(std::string name, unsigned age = 50, DEGREE degree = DEGREE::PhD);
    void getInfo() const override;
};

class Student : virtual public Human{
    private:
        std::string group;
        double score;
    public:
        Student(std::string name, unsigned age = 18, std::string group = "One", double score = 6);
        void getInfo() const override;
};

class Assistant : public Professor, public Student{
    public:
        Assistant(std::string name, unsigned age = 18, std::string group = "One", double score = 6, DEGREE degree = DEGREE::NonDegree);
        void getInfo() const override;
};

#endif
