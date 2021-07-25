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

fraction& fraction::operator+=(const fraction &term)
{
    *this = this->add(term);
    return *this;
}

fraction& fraction::operator-=(const fraction &term)
{
    *this = this->sub(term);
    return *this;
}

fraction& fraction::operator*=(const fraction &term)
{
    *this = this->multi(term);
    return *this;
}

fraction& fraction::operator/=(const fraction &term)
{
    *this = this->divide(term);
    return *this;
}

bool fraction::operator>(const fraction &term)
{
    int x = this->a * term.b;
    int y = this->b * term.a;

    if (x > y)
    {
        return true;
    }
    else
    {
        // Do nothing
    }

    return false;
}

bool fraction::operator>=(const fraction &term)
{
    int x = this->a * term.b;
    int y = this->b * term.a;

    if (x >= y)
    {
        return true;
    }
    else
    {
        // Do nothing
    }

    return false;
}

bool fraction::operator<(const fraction &term)
{
    int x = this->a * term.b;
    int y = this->b * term.a;

    if (x < y)
    {
        return true;
    }
    else
    {
        // Do nothing
    }
    
    return false;
}

bool fraction::operator<=(const fraction &term)
{
    int x = this->a * term.b;
    int y = this->b * term.a;

    if (x <= y)
    {
        return true;
    }
    else
    {
        // Do nothing
    }
    
    return false;
}

bool fraction::operator==(const fraction &term)
{
    int x = this->a * term.b;
    int y = this->b * term.a;

    if (x == y)
    {
        return true;
    }
    else
    {
        // Do nothing
    }
    
    return false;
}

bool fraction::operator!=(const fraction &term)
{
    int x = this->a * term.b;
    int y = this->b * term.a;

    if (x != y)
    {
        return true;
    }
    else
    {
        // Do nothing
    }
    
    return false;
}

fraction& fraction::operator++()
{
    this->a = this->a + this->b;
    this->simplify();
    return *this;
}

fraction& fraction::operator++(int)
{
    return ++(*this);
}

fraction& fraction::operator--()
{
    this->a = this->a - this->b;
    this->simplify();
    return *this;
}

fraction& fraction::operator--(int)
{
    return --(*this);
}

std::ostream& operator<<(std::ostream& s, const fraction &frac)
{
    s << frac.a << "/" << frac.b;
    return s;
}
