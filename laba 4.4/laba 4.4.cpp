#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	float V1, V2, S1, T;
	cout << "V1=";
	cin >> V1;
	cout << "V2=";
	cin >> V2;
	cout << "S1=";
	cin >> S1;
	cout << "T=";
	cin >> T;
	cout << "-----\nS2=" << S1 + T * (V1 + V2) << "km\n";
}

