#include<iostream>
#include<algorithm>
#include<cstring>
#include<utility>
using namespace std;
struct student {
	int id;
	string name;
	double m;
	double c;
	double e;
} a[101];
int main()
{
	int n, i, j, g;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i].id >> a[i].name >> a[i].m >> a[i].c >> a[i].e;
	}
	cin >> g;
	if (g == 1)
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				if ((a[j].m < a[j + 1].m) || (a[j].m == a[j + 1].m && a[j].id > a[j + 1].id))
				{
					swap(a[j], a[j + 1]);
				}
			}
		}
	}
	else if (g == 2)
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				if ((a[j].c < a[j + 1].c) || (a[j].c == a[j + 1].c && a[j].id > a[j + 1].id))
				{
					swap(a[j], a[j + 1]);
				}
			}
		}
	}
	else if (g == 3)
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				if ((a[j].e < a[j + 1].e) || (a[j].e == a[j + 1].e && a[j].id > a[j + 1].id))
				{
					swap(a[j], a[j + 1]);
				}
			}
		}
	}
	else
	{
		cout << "ERROR";
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		cout << a[i].id << " " << a[i].name << endl;
	}
	return 0;
}