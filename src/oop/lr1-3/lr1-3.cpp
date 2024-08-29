#define _USE_MATH_DEFINES // ��� ������ � ���������� M_PI

#include <iostream> // ��� ������ � �������� ����� / ������
#include <iomanip> // ��� ������ � �������� ������
#include <cmath> // ��� ������ � ��������������� ���������

#include "leibniz.h"
#include "nilakanta.h"

int main()
{
    int digitsCount = 7; // ���������� ������ ����� �������
    // ����� ������� �� ������������ ���� Leibniz
    std::cout << "Leibniz:\t" << lb::calculatePI(1000, digitsCount) << std::endl;
    // ����� ������� �� ������������ ���� Nilakanta
    std::cout << "Nilakanta:\t" << nl::calculatePI(1000, digitsCount) << std::endl;
    // ��������� ����������� � ���������� ������ math
    std::cout << std::fixed;
    std::cout << "Standart:\t" << std::setprecision(digitsCount) << M_PI;
    
    return EXIT_SUCCESS;
}
