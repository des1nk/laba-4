// laba 4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	float rad;
	cout << "rad=Pi*";
	cin >> rad;
	if (rad > 0 && rad < 2)
	{
		cout << "----\na=" << rad*180;
	}
	else
	{
		cout << "Error";
	}
}
