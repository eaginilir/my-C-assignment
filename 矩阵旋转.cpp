//判断一个只有0和1组成的矩阵经几次变换后可变为自对称矩阵（不管旋转多少次后的矩阵仍和之前一样）
//一次变换指从1变为0或从0变为1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, i, j, cishu = 0;
	char m[101][101];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> m[i][j];
		}
	}
	for (i = 0; i < (n+1)/2; i ++ )
	{
		for (j = 0; j < n/2; j++)
		{
			vector<char> values = { m[i][j],m[j][n - i - 1],m[n - 1 - i][n - 1 - j],m[n - 1 - j][i] };
			int ones = count(values.begin(), values.end(), '1');
			int zeros = 4 - ones;
			cishu = cishu + min(ones, zeros);
		}
	}
	if (n % 2 == 1)
	{
		cishu = cishu + ((m[n / 2][n / 2] == 1) ? 1: 0);
	}
	printf("%d", cishu);
	return 0;
}
