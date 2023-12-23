#include<iostream>
void swap(struct student& x, struct student& y);
struct student
{
	int socre;
	char name[20];
}stu[100];
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].socre >> stu[i].name;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (stu[j].socre < stu[j + 1].socre)
			{
				swap(stu[j], stu[j + 1]);
			}
		}
	}
	cout << stu[0].name << endl;
	return 0;
}
void swap(struct student& x, struct student& y)
{
	struct student temp = x;
	x = y;
	y = temp;
}