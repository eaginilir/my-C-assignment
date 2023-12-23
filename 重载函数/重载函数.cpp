#include<iostream>
#include<cstring>
using namespace std;
void oddfilter(int a[], int size);
void oddfilter(double a[], int size);
void oddfilter(char a[], int size);
int sishewuru(double x);
int main()
{
	int m, n,arr1[1000],len1=0,len2=0;
	double arr2[1000];
	char str[1000];
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		cin >> arr1[i];
		len1++;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
		len2++;
	}
	cin >> str;
	int len3 = strlen(str);
	oddfilter(arr1, len1);
	oddfilter(arr2, len2);
	oddfilter(str, len3);
	return 0;
}
void oddfilter(int a[], int size)
{
	int narr[1000],j=0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 1)
		{
			narr[j] = a[i];
			j++;
		}
	}
	if (j == 0)
	{
		cout << "No Odd!" << endl;
		return ;
	}
	for (int i = 0; i < j-1; i++)
	{
		for (int k = 0; k < j - i-1; k++)
		{
			if (narr[k] > narr[k + 1])
			{
				int temp = narr[k];
				narr[k] = narr[k + 1];
				narr[k + 1] = temp;
			}
		}
	}
	for (int i = 0; i < j; i++)
	{
		cout << narr[i] << " ";
	}
	cout << endl;
}
int sishewuru(double x)
{
	int num = (int)x;
	if ((x - num) < 0.5) 
	{
		return num;
	}
	else
	{
		return (num + 1);
	}
}
void oddfilter(double a[], int size)
{
	int narr[1000], j = 0;
	for (int i = 0; i < size; i++)
	{
		if (sishewuru(a[i]) % 2 == 1)
		{
			narr[j] = sishewuru(a[i]);
			j++;
		}
	}
	if (j == 0)
	{
		cout << "No Odd!" << endl;
		return;
	}
	for (int i = 0; i < j -1; i++)
	{
		for (int k = 0; k < j - i - 1; k++)
		{
			if (narr[k] > narr[k + 1])
			{
				int temp = narr[k];
				narr[k] = narr[k + 1];
				narr[k + 1] = temp;
			}
		}
	}
	for (int i = 0; i < j; i++)
	{
		cout << narr[i] << " ";
	}
	cout << endl;
}
void oddfilter(char str[], int size)
{
	int count[256] = { 0 };
	for (int i = 0; i < size; i++)
	{
		count[str[i]]++;
	}
	int output = 0;
	for (int i = 0; i < 256; i++)
	{
		if (count[i] % 2 == 1)
		{
			cout << (char)i<<" ";
			output++;
		}
	}
	if (output == 0)
	{
		cout << "No Odd!" << endl;
		return;
	}
	else
	{
		cout << endl;
	}
}