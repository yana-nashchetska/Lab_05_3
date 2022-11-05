// Lab_05_3
#include <iostream> 
#include <cmath> 
#include <iomanip> 

using namespace std;

double s(const double x);

int main()
{
	double tp, tk, v;
	int n;

	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n  = "; cin >> n;

	double dt = (tk - tp) / n;

	double t = tp;

	cout << "--------------------------------------------------------------" << endl;
	cout << "| \t t" << "\t|  " << "\t s(t^2 + 1) + (2s(1 -t))^2 + s(1)" << "\t|" << endl;

	while (t <= tk)
	{
		v = s(t * t + 1) + 2 * s(1 - t) * s(1 - t) + s(1);

		cout << "--------------------------------------------------------------" << endl;
		cout << "| " << "\t " << t << "\t|  " << "\t\t" << v << "\t\t" << "\t|" << endl;

		t += dt;
	}
	cout << "--------------------------------------------------------------" << endl;
	return 0;
}

double s(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) * cos(x * 1.) + 1) / (exp(x) * 1.);
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = (x * x * (2 * k - 1)) / ((2 * k - 1) * 1.);
			a *= R;
			S += a;
		} while (k < 4);
		return S;
	}
}
