#include <iostream>
#include <math.h>

int main()
{
    // ��� ������ �������� � �������
    setlocale(LC_ALL, "Russian");

    double a = 3; // ����� 1
    double b = 5; // ����� 2
    double c = std::sqrt(a * a + b * b); // ����������
    std::cout << "���������� ��-��: " << c << std::endl;

    return EXIT_SUCCESS;
}