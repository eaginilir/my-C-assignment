//将两个数组合并后去重并排序
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	int a[100], b[100];
	int i;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	vector <int> c(n + m);
	merge(a,a+n,b,b+m,c.begin());
	sort(c.begin(), c.end());
	auto it = unique(c.begin(), c.end());
	c.erase(it, c.end());
	for (int x : c)
	{
		cout << x << " ";
	}
	return 0;
}
