#pragma once
class line
{
private:
	float k, b; //переменные в уравнении y=kx+b
public:
	float x, y; //переменные для ответа
	line();
	~line();
	// создание линии
	void setline(float k_, float b_);
	// Пересечение
	static void cross(line &b_,line &a_);
};

