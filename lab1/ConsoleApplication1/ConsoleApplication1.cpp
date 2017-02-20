// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
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
	float k, b; //переменные для ввода
	char c; //для снятия ошибки ввода
	bool a; 
	line one, two;
	do
	{
		cout << "Введите переменные k и b первой линии" << endl;
		cin >> k >> b ;
		a = false;
		if (cin.fail())
		{
			a = true;
			cin.clear();
			cout << "Неверный ввод" << endl;
			cin >> c;
			cin.clear();
		}
	} while (a==true);
	one.setline(k, b);
	do
	{
		cout << "Введите переменные k и b второй линии" << endl;
		cin >> k >> b;
		a = false;
		if (cin.fail())
		{
			a = true;
			cin.clear();
			cout << "Неверный ввод" << endl;
			cin >> c;
			cin.clear();
		}
	} while (a == true);
	two.setline(k, b);
	line::cross(one, two);
	system("pause");
    return 0;
}

