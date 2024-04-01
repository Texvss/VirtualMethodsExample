#include "virtual/example.h"
#include <iostream>
int main()
{
    Human h("Name", 12);
    h.getInfo();
    Professor p("Prof", 50, DEGREE::Doctor);
    p.getInfo();
}
