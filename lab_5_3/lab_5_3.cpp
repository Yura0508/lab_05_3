// lab_5_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 
double k(const double x);
int main()
{
	double zp, zk, h;
	int n;
	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;
	double dz = (zk - zp) / n;
	double z = zp;
	cout << fixed
	 << "----------------------------------------" << endl;
	cout << "|" << setw(10) << "z" << "    |"
	<< setw(16) << "h" << "       |"
	<< endl;
	cout << "----------------------------------------" << endl;


	while (z <= zk)
	{
		h = k(z * z + 1) - k(z * z - 1) + 2 * k(z);
		
		z += dz;

		cout << "|" << setw(12) << setprecision(4) << z << "  |"
			<< setw(20) << setprecision(4) << h << "   |"
			<< endl;
	}
	cout << "----------------------------------------" << endl;
	return 0;

}
double k(const double x)
{
	if (abs(x) >= 1)
		return (exp(x) + sin(x)) / (pow (cos(x), 2) + 1);
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = (1 / exp(x)) * a;
		do
		{
			i++;
			double R = x / i;
			a *= R;
			S += a;
			
		} while (i < 5);
		return S;
	}
} 

