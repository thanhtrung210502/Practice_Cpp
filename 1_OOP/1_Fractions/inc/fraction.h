#ifndef _FRACTION_H_
#define _FRACTION_H_

#include <iostream>

class fraction
{
    friend std::ostream& operator<<(std::ostream& s, const fraction &frac);
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

    // Overload  operator
    fraction operator+(const fraction &term);
    fraction operator-(const fraction &term);
    fraction operator*(const fraction &term);
    fraction operator/(const fraction &term);
    fraction& operator+=(const fraction &term);
    fraction& operator-=(const fraction &term);
    fraction& operator*=(const fraction &term);
    fraction& operator/=(const fraction &term);
    bool operator>(const fraction &term);
    bool operator>=(const fraction &term);
    bool operator<(const fraction &term);
    bool operator<=(const fraction &term);
    bool operator==(const fraction &term);
    bool operator!=(const fraction &term);
    fraction& operator++();
    fraction& operator++(int);
    fraction& operator--();
    fraction& operator--(int);
};

#endif // _FRACTION_H_