// laba 4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	float a;
	cout << "a=";
	cin >> a;
	if (a > 0 && a < 360)
	{
		a = a/180;
		cout << "a=" << a << "*Pi";
	}
	else
	{
		cout << "Error";
	}
}
