#include <iostream>
#include "rational.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int size;
    cout << "Введите количество дробей: ";
    cin >> size;

    Rational* array = new Rational[size];
    int a, b;

    for (int i = 0; i < size; i++) {
        cout << "Введите числитель и знаменатель для дроби " << i + 1 << " : ";
        cin >> a >> b;
        array[i].set(a, b);
    }

    for (int i = 0; i < size; i++) {
        cout << "дробь " << i + 1 << " : ";
        array[i].show();
    }

    // Проверка операций
    Rational x = array[0];
    Rational y = array[0];
    Rational z;

    cout << "Сложение: ";
    z = x + y;
    z.show();

    

    cout << "Инкремент: ";
    ++x;
    x.show();

    cout << "Сравнение (==): ";
    if (x == y) {
        cout << "равны" << endl;
    }
    else {
        cout << "не равны" << endl;
    }

    cout << "Сравнение (>): ";
    if (x > y) {
        cout << "x > y" << endl;
    }
    else {
        cout << "x <= y" << endl;
    }

    cout << "Присваивание: ";
    z = x;
    z.show();

    delete[] array;

    return 0;
}
