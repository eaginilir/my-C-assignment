#include<iostream>
using namespace std;
double integral(double a, double b, double(*fun)(double));
double f(double x);
int main()
{
	double a, b;
	cin >> a >> b;
	double s = integral(a, b, f);
	cout << s << endl;
	return 0;
}
double integral(double a, double b, double (*fun)(double))
{
	int n = 10000;
	double h = (b - a) / n;
	double s = 0.5 * (fun(a) + fun(b));
	for (int i = 0; i < n; i++)
	{
		s += fun(a + i * h);
	}
	s *= h;
	return s;
}
double f(double x)
{
	return (1 + x);//这里的函数可以随便换
}