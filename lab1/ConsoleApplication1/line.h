#pragma once
class line
{
private:
	float k, b; //���������� � ��������� y=kx+b
public:
	float x, y; //���������� ��� ������
	line();
	~line();
	// �������� �����
	void setline(float k_, float b_);
	// �����������
	static void cross(line &b_,line &a_);
};

