#include "stdafx.h"
#include "line.h"
#include <iostream>
using namespace std;
line::line()
{
	k = 0;
	b = 0;
}


line::~line()
{
}

void line::setline(float k_, float b_)
{
	k = k_;
	b = b_;
}



void line::cross(line &a_, line &b_)
{

	float c, d;
	c = b_.k - a_.k; // ��� �������� ������� �� ���� (��������������)
	d = b_.b - a_.b;// ��� �������� ���������� �����
	try
	{
		if ((c == 0) && (d == 0))
		{
			throw '1';
		}
		else
		{
			if (c == 0)
			{
				throw 1;
			}
		}
	}
	catch (int i)
	{
		cout << "����� �����������" << endl;
		a_.x = NULL;
		a_.y = NULL;
		return ;
	}
	catch (char i)
	{
		cout << "����� ���������" << endl;
		a_.x = NULL;
		a_.y = NULL;
		return ;
	}
	a_.x = (a_.b - b_.b) / (b_.k - a_.k);
	a_.y = (a_.b*b_.k - a_.k*b_.b) / (b_.k - a_.k);
	cout << "������ ������������ ��� x= " << a_.x << " � y= " << a_.y << endl;
}
