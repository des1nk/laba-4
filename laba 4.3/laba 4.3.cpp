// laba 4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	float x, Y, A;
	cout << "x=";
	cin >> x;
	cout << "A=";
	cin >> A;
	cout << "Y=";
	cin >> Y;
	cout << "-----\n1kg=" << A / x << "rub\n";
	cout << Y << "kg=" << A / x * Y << "rub";
}
