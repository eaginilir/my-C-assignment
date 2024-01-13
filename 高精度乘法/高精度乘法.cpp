#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[2001], str2[2001];
	int a[2001], b[2001], c[4001] = { 0 };
	cin >> str1 >> str2;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 1; i <= len1; i++)
	{
		a[i] = str1[len1 - i] - '0';
	}
	for (int j = 1; j <= len2; j++)
	{
		b[j] = str2[len2 - j] - '0';
	}
	for (int i = 1; i <= len1; i++)
	{
		for (int k = 1; k <= len2; k++)
		{
			c[i + k - 1] += a[i] * b[k];
		}
	}
	for (int k = 1; k <= len1 + len2; k++)
	{
		if (c[k] > 9)
		{
			c[k + 1] += c[k] / 10;
			c[k] = c[k] % 10;
		}
	}
	int len = len1 + len2;
	while (c[len] == 0 && len > 1)
	{
		len--;
	}
	for (int k = len; k >= 1; k--)
	{
		cout << c[k];
	}
	cout << endl;
	return 0;
}