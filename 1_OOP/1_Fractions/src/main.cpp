#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    fraction a{1,5};
    fraction b{1,3};
    fraction d{1,3};

    fraction c;
    
    // c = a.add(b);
    // c.display();

    // c = a.sub(b);
    // c.display();

    // c = a.multi(b);
    // c.display();

    // c = a.divide(b);
    // c.display();

    // fraction d {-4,-10};
    // d.display();

    // int ret = b.compare(b);
    // cout << ret << "\n";

    // c = a + b + d;
    // c.display();

    // c = a - b - d;
    // c.display();

    // c = a * b * d;
    // c.display();

    // c = a / b / d;
    // c.display();

    // --a;
    // a.display();

    std::cout << "a = " << a << std::endl;
    return 0;
}