#ifndef VIRTUAL_EXAMPLE
#define VIRTUAL_EXAMPLE

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
    void getInfo() const;
};


class Professor : public Human
{
private:
    DEGREE degree;

public:
    Professor(std::string name, unsigned age = 50, DEGREE degree = DEGREE::PhD);
    void getInfo() const;
};


#endif
