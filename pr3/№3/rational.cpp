#include <iostream>
#include "rational.h"
using namespace std;

Rational::Rational(int a1, int b1) {
    if (b1 == 0) {
        a1 = 0;
        b1 = 0;
    }
    else if (a1 >= b1) {
        a = a1 % b1;
        b = b1;
    }
    else {
        a = a1;
        b = b1;
    }
    int nod = 1;
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            nod = i;
        }
    }
    if (nod > 1) {
        a /= nod;
        b /= nod;
    }
}

void Rational::set(int a1, int b1) {
    if (b1 == 0) {
        a1 = 0;
        b1 = 0;
    }
    else if (a1 >= b1) {
        a = a1 % b1;
        b = b1;
    }
    else {
        a = a1;
        b = b1;
    }
    int nod = 1;
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            nod = i;
        }
    }
    if (nod > 1) {
        a /= nod;
        b /= nod;
    }
}

void Rational::show() {
    cout << a << "/" << b << endl;
}

Rational Rational::operator+(const Rational& other) const {
    Rational result;
    result.a = a * other.b + b * other.a;
    result.b = b * other.b;
    int nod = 1;
    for (int i = 1; i <= result.a && i <= result.b; ++i) {
        if (result.a % i == 0 && result.b % i == 0) {
            nod = i;
        }
    }
    if (nod > 1) {
        result.a /= nod;
        result.b /= nod;
    }
    return result;
}

bool Rational::operator==(const Rational& other) const {
    return a == other.a && b == other.b;
}

bool Rational::operator>(const Rational& other) const {
    return a * other.b > b * other.a;
}

Rational& Rational::operator=(const Rational& other) {
    a = other.a;
    b = other.b;
    return *this;
}

Rational& Rational::operator++() {
    a += b;
    int nod = 1;
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            nod = i;
        }
    }
    if (nod > 1) {
        a /= nod;
        b /= nod;
    }
    return *this;
}



