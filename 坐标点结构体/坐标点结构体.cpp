#include<iostream>
using namespace std;
void sort(int arr[], int x);
void vertical(struct line x, struct line y);
void rectangle(struct matrix x, struct matrix y);
struct line {
	int x1;
	int y1;
	int x2;
	int y2;
}line[2];
struct matrix {
	int x1;
	int y1;
	int x2;
	int y2;
}matrix[2];
int main()
{
	for (int i = 0; i < 2; i++)
	{
		cin >> line[i].x1 >> line[i].y1 >> line[i].x2 >> line[i].y2;
	}
	for (int i = 0; i < 2; i++)
	{
		cin >> matrix[i].x1 >> matrix[i].y1 >> matrix[i].x2 >> matrix[i].y2;
	}
	vertical(line[0], line[1]);
	rectangle(matrix[0], matrix[1]);
	return 0;
}
void vertical(struct line x, struct line y)
{
	if (x.x1 == x.x2 && y.y1 == y.y2)
	{
		cout << "True" << endl;
		return;
	}
	if (x.y1 == x.y2 && y.x1 == y.x2)
	{
		cout << "True" << endl;
		return;
	}
	if ((((x.y1 - x.y2) * (y.y1 - y.y2)) / ((x.x1 - x.x2) * (y.x1 - y.x2)) == -1) && ((x.x1 - x.x2) * (y.x1 - y.x2) != 0))
	{
		cout << "True" << endl;
		return;
	}
	else
	{
		cout << "False" << endl;
		return;
	}
}
void rectangle(struct matrix x, struct matrix y)
{
	if (y.y1 >= x.y2)
	{
		cout << "False" << endl;
		return;
	}
	if (y.y2 <= x.y1)
	{
		cout << "False" << endl;
		return;
	}
	if (y.x1 >= x.x2)
	{
		cout << "False" << endl;
		return;
	}
	if (y.x2 <= x.x1)
	{
		cout << "False" << endl;
		return;
	}
	int arr1[4] = { x.x1,x.x2,y.x1,y.x2 }, arr2[4] = { x.y1,x.y2,y.y1,y.y2 };
	sort(arr1, 4);
	sort(arr2, 4);
	cout << 2 * (arr1[2] - arr1[1]) + 2 * (arr2[2] - arr2[1]) << endl;
	return;
}
void sort(int arr[], int x)
{
	for (int i = 0; i < x - 1; i++)
	{
		for (int j = 0; j < x - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}