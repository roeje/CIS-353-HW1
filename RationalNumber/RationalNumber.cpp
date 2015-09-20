//
// Created by Jesse on 9/15/2015.
//

#include "RationalNumber.h"

using namespace std;
//using namespace RationalNumber;


void RationalNumber::reduce() {
    if (numerator != 0) {
        auto common = gcd(std::fabs(numerator), denominator);
        numerator = numerator / common;
        denominator = denominator / common;
    }
}

int RationalNumber::gcd(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }
    return num1;

}

RationalNumber::RationalNumber() {
}

RationalNumber::RationalNumber(int numer, int denom) {
    if (denom == 0)
        denom = 1;
    if (denom < 0) {
        numer = numer * -1;
        denom = denom * -1;
    }
    numerator = numer;
    denominator = denom;

    reduce();
}

int RationalNumber::getNumerator() const {
    return numerator;
}

int RationalNumber::getDenominator() const {
    return denominator;
}

RationalNumber RationalNumber::reciprocal() {
    return RationalNumber(numerator, denominator);
}

RationalNumber RationalNumber::add(RationalNumber& op2) const {
    auto commonDenomintaor = denominator * op2.getDenominator();
    auto numerator1 = numerator * op2.getDenominator();
    auto numerator2 = op2.getNumerator() * denominator;
    auto sum = numerator1 + numerator2;

    return RationalNumber(sum, commonDenomintaor);
}

RationalNumber RationalNumber::subtract(RationalNumber& op2) const {
    auto commonDenominator = denominator * op2.getDenominator();
    auto numerator1 = numerator * op2.getDenominator();
    auto numerator2 = op2.getNumerator() * denominator;
    auto difference = numerator1 - numerator2;

    return RationalNumber(difference, commonDenominator);
}

RationalNumber RationalNumber::multiply(RationalNumber op2) const {
    auto numer = numerator * op2.getNumerator();
    auto denom = denominator * op2.getDenominator();

    return RationalNumber(numer, denom);
}

RationalNumber RationalNumber::divide(RationalNumber op2) {
    return multiply(op2.reciprocal());
}

bool RationalNumber::isLike(RationalNumber& op2) const{
    return ( numerator == op2.getNumerator() &&
             denominator == op2.getDenominator() );
}

string RationalNumber::toString() {
    string result;
//    result = to_string(numerator) == 0 ? "0" : denominator == 1 ? numerator + "" : numerator + "/" + denominator;
    if (numerator == 0)
        result = "0";
    else
    if (denominator == 1)
        result = to_string(numerator) + "";
    else
        result = to_string(numerator) + "/" + to_string(denominator);

    return result;
}
