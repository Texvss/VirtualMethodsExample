#include "virtual/example.h"
#include <iostream>
#include <vector>
int main()
{
    Human h("Name", 12);
    // h.getInfo();
    Professor p("Prof", 50, DEGREE::Doctor);
    // p.getInfo();
    Student s("Same", 18);
    // s.getInfo();
    Assistant a("assistant");
    // a.getInfo();
    std::vector<Human*> vector{&h, &p, &s, &a};
    for (Human* x: vector){
        x->getInfo();
    }
}
