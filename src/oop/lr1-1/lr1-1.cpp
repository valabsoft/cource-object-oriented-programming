#include <iostream>
#include <math.h>

int main()
{
    // Для вывода кирилицы в консоль
    setlocale(LC_ALL, "Russian");

    double a = 3; // Катет 1
    double b = 5; // Катет 2
    double c = std::sqrt(a * a + b * b); // Гипотенуза
    std::cout << "Гипотенуза тр-ка: " << c << std::endl;

    return EXIT_SUCCESS;
}