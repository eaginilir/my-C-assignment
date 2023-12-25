//输入n个字符串，将其中字母和“5”删去后去重并排序输出数组
#include <iostream>
using namespace std;
bool number(char a);
int trans(char a[]);
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int arr[1001], a = 0;
        char str[1001], temp[1001], k = 0;
        int i = 0;
        cin >> str;
        while (str[i] != '\0')
        {
            if (number(str[i]))
            {
                temp[k] = str[i];
                k++;
            }
            else
            {
                if (k != 0)
                {
                    temp[k] = '\0';
                    k = 0;
                    arr[a] = trans(temp);
                    a++;
                }
            }
            i++;
        }
        if (k != 0)
        {
            temp[k] = '\0';
            k = 0;
            arr[a] = trans(temp);
            a++;
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = a - 1; j > 0; j--)
            {
                if (arr[j] < arr[j - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
        cout << arr[0];
        for (int i = 1; i < a; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                cout << " " << arr[i];
            }
        }
        cout << endl;
    }
    return 0;
}
bool number(char a)
{
    if (a >= '0' && a <= '9')
    {
        if (a == '5')
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
        return false;
}
int trans(char a[])
{
    int k = 0, i = 0;
    while (a[i] != '\0')
    {
        k = k * 10;
        k = k + a[i] - '0';
        i++;
    }
    return k;
}