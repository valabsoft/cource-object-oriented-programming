#define _USE_MATH_DEFINES // Для работы с константой M_PI

#include <fstream> // Для работа с файловыми потоками
#include <iomanip> // Для работы с форматом данных
#include <cmath> // Для работы с математическими функциями

using namespace std;

int main()
{
    ifstream inFile; // Входной файл
    inFile.open("pi-in.txt", ios::in); // Открываем файл
    int N = 5; // Значение по умолчанию
    inFile >> N; // Читаем одну строчку данных из файла 
    inFile.close(); // Закрываем файл

    ofstream outFile("pi-out.txt", ios::app); // Выходной файл
    outFile << fixed; // Задаем формат вывода
    for (int i = 1; i < N + 1; i++)
    {
        // Задаем кол-во знаков после запятой и выводим число Пи
        outFile << "PI = " << setprecision(i) << M_PI << endl;
    }
    outFile.close(); // Закрываем файл

    return EXIT_SUCCESS;
}