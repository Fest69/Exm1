#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;



// ��������� ������� c � ����� ������� m
int Count(char n, std::string m, int i)


{
    setlocale(LC_ALL, "Ukrainian");
    if (i == m.length()) // ����� ��������� ������������ ������� - ����� ����� ��������
        return 0;
    else
    {
        if (n == m[i]) // ���� ������ ��������
            return Count(n, m, i + 1) + 1; // �������� ������� ��������� ������� �� 1
        else
            return Count(n, m, i + 1); // ������, ������� �� ������� ���������� �������
    }
}