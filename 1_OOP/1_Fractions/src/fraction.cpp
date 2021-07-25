#include <algorithm>
#include "fraction.h"

fraction::fraction(int a, int b)
    :a{a}, b{b}
{
    this->simplify();
}

fraction fraction::add(const fraction &term)
{
    fraction result;
    result.a = this->a * term.b + this->b * term.a;
    result.b = this->b * term.b;

    this->simplify();

    return result;
}

fraction fraction::sub(const fraction &term)
{
    fraction result;
    result.a = this->a * term.b - this->b * term.a;
    result.b = this->b * term.b;

    this->simplify();

    return result;    
}

fraction fraction::multi(const fraction &term)
{
    fraction result;
    result.a = this->a * term.a;
    result.b = this->b * term.b;

    this->simplify();

    return result;     
}

fraction fraction::divide(const fraction &term)
{
    fraction result;
    result.a = this->a * term.b;
    result.b = this->b * term.a;

    this->simplify();

    return result;     
}

void fraction::simplify(void)
{
    int gcd_frac = std::__gcd(this->a, this->b);
    this->a = this->a / gcd_frac;
    this->b = this->b / gcd_frac;
}

int fraction::compare(const fraction &term)
{
    int result;
    int x = this->a * term.b;
    int y = this->b * term.a;

    if (x > y)
    {
        result =  1;
    }
    else if (x < y)
    {
        result = -1; 
    }
    else
    {
        /* Mean x == y*/
        result = 0;
    }

    return result;
}

void fraction::display(void)
{
    std::cout << a << "/" << b << std::endl;
}

fraction fraction::operator+(const fraction &term)
{
    fraction result;
    result.a = this->a * term.b + this->b * term.a;
    result.b = this->b * term.b;

    this->simplify();

    return result;     
}

fraction fraction::operator-(const fraction &term)
{
    fraction result;
    result.a = this->a * term.b - this->b * term.a;
    result.b = this->b * term.b;

    this->simplify();

    return result;     
}

fraction fraction::operator*(const fraction &term)
{
    fraction result;
    result.a = this->a * term.a;
    result.b = this->b * term.b;

    this->simplify();

    return result;     
}

fraction fraction::operator/(const fraction &term)
{
    fraction result;
    result.a = this->a * term.b;
    result.b = this->b * term.a;

    this->simplify();

    return result;      
}
