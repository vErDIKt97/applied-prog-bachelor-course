// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "line.h"
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float k, b; //���������� ��� �����
	char c; //��� ������ ������ �����
	bool a; 
	line one, two;
	do
	{
		cout << "������� ���������� k � b ������ �����" << endl;
		cin >> k >> b ;
		a = false;
		if (cin.fail())
		{
			a = true;
			cin.clear();
			cout << "�������� ����" << endl;
			cin >> c;
			cin.clear();
		}
	} while (a==true);
	one.setline(k, b);
	do
	{
		cout << "������� ���������� k � b ������ �����" << endl;
		cin >> k >> b;
		a = false;
		if (cin.fail())
		{
			a = true;
			cin.clear();
			cout << "�������� ����" << endl;
			cin >> c;
			cin.clear();
		}
	} while (a == true);
	two.setline(k, b);
	line::cross(one, two);
	system("pause");
    return 0;
}

