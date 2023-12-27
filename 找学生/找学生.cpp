//先给学生按照成绩排名，再依据输入的学生的名字或部分名字找学生并输出学号
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void findname(struct student* stu, int n, char* name);
struct student {
	char name[20];
	int id_num=0;
	int score;
}stu[100];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].name >> stu[i].score;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (stu[j].score < stu[j + 1].score)
			{
				swap(stu[j], stu[j + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		stu[i].id_num = 900001 + i;
	}
	char name[20];
	cin >> name[20];
	findname(stu, n, name);
	return 0;
}
void findname(struct student* stu, int n, char* name)
{
	int i;
	char* p;
	for (i = 0; i < n; i++)
	{
		p = strstr(stu[i].name, name);
		if (p != NULL)
		{
			cout << stu[i].id_num << stu[i].name << stu[i].score << endl;
		}
	}
}
