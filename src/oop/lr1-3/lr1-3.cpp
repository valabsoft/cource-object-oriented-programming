#define _USE_MATH_DEFINES // Для работы с константой M_PI

#include <iostream> // Для работы с потоками ввода / вывода
#include <iomanip> // Для работы с форматом данных
#include <cmath> // Для работы с математическими функциями

#include "leibniz.h"
#include "nilakanta.h"

int main()
{
    int digitsCount = 7; // Количество знаков после запятой
    // Вызов функции из пространства имен Leibniz
    std::cout << "Leibniz:\t" << lb::calculatePI(1000, digitsCount) << std::endl;
    // Вызов функции из пространства имен Nilakanta
    std::cout << "Nilakanta:\t" << nl::calculatePI(1000, digitsCount) << std::endl;
    // Сравнение результатов с константой модуль math
    std::cout << std::fixed;
    std::cout << "Standart:\t" << std::setprecision(digitsCount) << M_PI;
    
    return EXIT_SUCCESS;
}
