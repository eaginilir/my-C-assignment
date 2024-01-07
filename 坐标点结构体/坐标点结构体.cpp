/*实现一个坐标点结构体，在这个结构体中含有直线结构体和矩形结构体，
直线结构体包含这条直线上的两个不同点的坐标，矩形结构体（明确这个矩
形的各个边都与坐标轴平行）包括这个矩形的左下角点和右上角点的坐标，
现在要求输入两条直线（不考虑直线重叠）和两个矩形，判断这两条直线是
否垂直，垂直输出“true”，不垂直输出“false”，并判断两个矩形是否重叠，
若两个矩形有重叠部分，求出重叠部分的周长，若两个矩形没有重叠部分，
输出“false”。（只在角或边接触的矩形不构成重叠）*/
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
}line[2];//定义直线结构体
struct matrix {
	int x1;
	int y1;
	int x2;
	int y2;
}matrix[2];//定义矩形结构体
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
	}//先考虑直线中有与坐标轴平行的情况
	if ((((x.y1 - x.y2) * (y.y1 - y.y2)) / ((x.x1 - x.x2) * (y.x1 - y.x2)) == -1) && ((x.x1 - x.x2) * (y.x1 - y.x2) != 0))
	{
		cout << "True" << endl;
		return;
	}//再考虑直线不与坐标轴平行的情况
	else
	{
		cout << "False" << endl;
		return;
	}//其他则不平行
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
	}//上面四种是不符合矩形重叠的条件
	int arr1[4] = { x.x1,x.x2,y.x1,y.x2 }, arr2[4] = { x.y1,x.y2,y.y1,y.y2 };
	sort(arr1, 4);
	sort(arr2, 4);
	cout << 2 * (arr1[2] - arr1[1]) + 2 * (arr2[2] - arr2[1]) << endl;
	//若矩形重叠，重叠矩形必由横竖两种直线中中间两条直线构成，周长则为这些直线之间距离组成
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
