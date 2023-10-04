// Lab_04_3.cpp
// < Назаркевич, Андрій>
// Лабораторна робота № 4.3
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 17
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b, c, F, x, xp, xk, dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;

	while (x < xk)
	{
		if (x < -10 && b != 0)
			F = a * pow(x, 2) - c * x + b;
		else
			if (x > -10 && b == 0)
				F = (x - a) / (x - c);
			else
				F = -x / (a - c);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;

	}
	cout << "---------------------------" << endl;
	cin.get();
	return 0;
}