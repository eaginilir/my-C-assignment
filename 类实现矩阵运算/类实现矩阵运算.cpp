#include<iostream>
#include"Matrix.h"
using namespace std;

int main()
{
	/*int a[2][3] = {{1,2,3},{4,5,6}};
	Matrix x(2, 3, (int*)a);

	cout << "------x=------" << endl;
	x.display();
	cout << "------x+x=------" << endl;
	(x + x).display();
	cout << "------x-x=------" << endl;
	(x - x).display();
	cout << "------x*2=------" << endl;
	(x * 2).display();
	cout << "------~x=------" << endl;
	(~x).display();

	Matrix t(x);
	Matrix y(2, 3);
	y = t;
	y = ~y;
	cout << "------x*transpose(x)=------" << endl;
	(x * y).display();*/
	/*int r, c;
	cin >> r >> c;
	int **arr1 = new int*[r];
	for (int i = 0; i < r; i++)
	{
		arr1[i] = new int [c];
		for (int j = 0; j < c; j++)
		{
			int x;
			cin >> x;
			arr1[i][j] = x;
		}
	}
	int **arr2 = new int* [r];
	for (int i = 0; i < r; i++)
	{
		arr2[i] = new int[c];
		for (int j = 0; j < c; j++)
		{
			int x;
			cin >> x;
			arr2[i][j] = x;
		}
	}
	Matrix a(r, c), b(r,c);
	a.initialise(arr1);
	b.initialise(arr2);
	(a + b).display();
	for (int i = 0; i < r; i++)
	{
		delete[]arr1[i];
		delete[]arr2[i];
	}
	delete[]arr1;
	delete[]arr2;*/
	int **arr1 = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		arr1[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			cin >> arr1[i][j];
		}
	}
	int** arr2 = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		arr2[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			cin >> arr2[i][j];
		}
	}
	Matrix a(3, 3), b(3, 3);
	a.initialise(arr1);
	b.initialise(arr2);
	cout << (a + b);
	cout << (a - b);
	cout << (a * b);
	return 0;
}