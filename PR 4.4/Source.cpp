// Lab_04_4.cpp
// Обухов Віктор
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком з дисципліни
// Варіант 7

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double y, x, xp, xk, dx, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;


	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -R)
			y = R;
		else
			if (-R < x && x <= 0)
				y = sqrt(R * R - ((x + R) * (x + R)));
			else
				if (0 < x && x <= R)
					y = R + sqrt(R * R - x * x);
				else
					if (R < x && x <= 6)
						y = R + ((-3 - R) / (6 - R)) * (x - R);
					else
						y = (-3) + 1 * (x - 6);


		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;

}
