#include<iostream>
#include<cmath>
using namespace std;
bool prime(int x);
int main()
{
	int n, i, arr[10000];
	cin >> n;
	if (n <= 0 || n > 10000)
	{
		cout << "INCORRECT INPUT!" << endl;
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] > 1000000 || arr[i] <= 0)
		{
			cout << "INCORRECT INPUT!" << endl;
			return 0;
		}
		else if (prime(arr[i]))
		{
			cout << arr[i] << " " << 0 << endl;
		}
		else
		{
			int left = arr[i] - 1;
			int right = arr[i] + 1;
			while (true)
			{
				if (prime(left))
				{
					cout << left << " " << arr[i] - left << endl;
					break;
				}
				else if (prime(right))
				{
					cout << right << " " << right - arr[i] << endl;
					break;
				}
				else
				{
					left--;
					right++;
				}
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
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}