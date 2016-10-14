// Calculator 2.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

double sum(float a, unsigned int b);
double sub(float a, unsigned int b);
double div(float a, unsigned int b);
double mult(float a, unsigned int b);
double square(float a, unsigned int b);
double pow(float a, unsigned int b);

double sum(float a, unsigned int b)
{
	return a + b;
}

double sub(float a, unsigned int b)
{
	return a - b;
}

double div(float a, unsigned int b)
{
	return a / b;
}

double mult(float a, unsigned int b)
{
	return a * b;
}

double square(float a)
{
	double c = 0, res;
	res = a;
	while (c - res > 0.00001 || c - res < -0.00001)
	{
		c = res;
		res = (c + a / res) / 2;
	}
	return res;
}

double squar(float b)
{
	double c = 0, res;
	res = b;
	while (c - res > 0.00001 || c - res < -0.00001)
	{
		c = res;
		res = (c + b / res) / 2;
	}
	return res;
}

double pow(float a, unsigned int b)
{
	double res = 1;
	for (; b > 0; b--)
	{
		res = res * a;
	}
	return res;
}

int main()
{
	float a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "a + b = " << sum(a, b) << endl;
	cout << "a - b = " << sub(a, b) << endl;
	cout << "a / b = " << div(a, b) << endl;
	cout << "a * b = " << mult(a, b) << endl;
	cout << "a^1/2 = " << squar(a) << endl;
	cout << "b^1/2 = " << squar(b) << endl;
	cout << "a^b = " << pow(a, b) << endl;
	_getch();
	return 0;
}
