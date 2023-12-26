#include<iostream>
using namespace std;
int  main()
{
	int n, m, k, matrix1[100][100], matrix2[100][100], matrix3[100][100] = {0};
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix1[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			for (int l = 0; l < m; l++)
			{
				matrix3[i][j] = matrix1[i][l] * matrix2[l][j] + matrix3[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << matrix3[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}