#define _USE_MATH_DEFINES // ��� ������ � ���������� M_PI

#include <fstream> // ��� ������ � ��������� ��������
#include <iomanip> // ��� ������ � �������� ������
#include <cmath> // ��� ������ � ��������������� ���������

using namespace std;

int main()
{
    ifstream inFile; // ������� ����
    inFile.open("pi-in.txt", ios::in); // ��������� ����
    int N = 5; // �������� �� ���������
    inFile >> N; // ������ ���� ������� ������ �� ����� 
    inFile.close(); // ��������� ����

    ofstream outFile("pi-out.txt", ios::app); // �������� ����
    outFile << fixed; // ������ ������ ������
    for (int i = 1; i < N + 1; i++)
    {
        // ������ ���-�� ������ ����� ������� � ������� ����� ��
        outFile << "PI = " << setprecision(i) << M_PI << endl;
    }
    outFile.close(); // ��������� ����

    return EXIT_SUCCESS;
}