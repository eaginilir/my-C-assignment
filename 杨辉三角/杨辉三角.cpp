#include<iostream>
using namespace std;
int main()
{
	int yanghui[100][100] = {0}, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		yanghui[i][0] = 1;
		yanghui[i][i] = 1;
	}
	for (int i = 2; i < n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			yanghui[i][j] = yanghui[i - 1][j - 1] + yanghui[i - 1][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << yanghui[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}