#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
/*int Fibonacci(int x);
int main()
{
	int n;
	cin >> n;
	cout << Fibonacci(n)<<endl;
	return 0;
}
int Fibonacci(int x)
{
	if (x != 1 && x != 2)
	{
		return (Fibonacci(x - 1) + Fibonacci(x - 2));
	}
	if (x == 1 || x == 2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}*///这是递归（效率低）

/*int Fibonacci(int x);
int main()
{
	int n;
	cin >> n;
	cout << Fibonacci(n) << endl;
}
int Fibonacci(int x)
{
	if(x<=0)
	{
		return -1;
	}
	else if(x==1||x==2)
	{
		return 1;
	}
	int a = 1, b = 1, c;
	for (int i = 3; i <= x; i++)
	{ 
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}*///这是非递归正常做法（时间复杂度为n）