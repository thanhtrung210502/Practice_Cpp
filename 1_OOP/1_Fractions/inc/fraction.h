#ifndef _FRACTION_H_
#define _FRACTION_H_

#include <iostream>

class fraction
{
private:
    int a;
    int b;

public:
    // Constructor
    fraction(int a=0, int b=1);
    
    // Methods
    fraction add(const fraction &term);
    fraction sub(const fraction &term);
    fraction multi(const fraction &term);
    fraction divide(const fraction &term);
    void simplify(void);
    int compare(const fraction &term);
    void display(void);
};

#endif // _FRACTION_H_