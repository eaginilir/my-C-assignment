#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool prime(int x);
bool huiwen(int x);
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	cin >> a >> b;
	b = min(b, 9999999);
	for (int i = a; a <= i && i <= b; i++)
	{
		if (huiwen(i))
		{
			if (prime(i))
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}
bool prime(int x)
{
	if (x <= 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}
bool huiwen(int x)
{
	int num = x;
	int i = 0;
	int re = 0;
	while (x != 0)
	{
		re = re * 10 + x % 10;
		x = x / 10;
		i++;
	}
	if (i % 2 == 0 && num != 11)
	{
		return false;
	}
	if (re == num)
	{
		return true;
	}
	return false;
}