//
// Created by Jesse on 9/15/2015.
//

#ifndef RATIONALNUMBER_RATIONALNUMBER_H
#define RATIONALNUMBER_RATIONALNUMBER_H

#include <string>
#include <cmath>
//#include <rpcnsip.h>
//#include <wsman.h>
//#include <rpcndr.h>


class RationalNumber {
private:
    int numerator;
    int denominator;

    void reduce();

    int gcd(int num1, int num2);

public:
    RationalNumber();

    RationalNumber(int numer, int denom);

    int getNumerator() const;

    int getDenominator() const;

    RationalNumber reciprocal();

    RationalNumber add(RationalNumber& op2) const;

    RationalNumber subtract(RationalNumber& op2) const;

    RationalNumber multiply(RationalNumber op2) const;

    RationalNumber divide(RationalNumber op2);

    bool isLike(RationalNumber& op2) const;

    std::string toString();

};


#endif //RATIONALNUMBER_RATIONALNUMBER_H
