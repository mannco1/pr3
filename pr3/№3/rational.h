#include <iostream>
using namespace std;

class Rational {
private:
    int a, b; // числитель и знаменатель

public:
    Rational() {
        a = 0; b = 0;
    }

    Rational(int a1, int b1);

    void set(int a1, int b1);
    void show();
    
    Rational operator+(const Rational& other) const;
    bool operator==(const Rational& other) const;
    bool operator>(const Rational& other) const;
    Rational& operator=(const Rational& other);
    Rational& operator++();

    

    





};
