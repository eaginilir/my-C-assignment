#include <iostream>
using namespace std;
void printterm(int arr, int i, int n);
int main()
{
    int n, arr[105];
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        cin >> arr[i];
    }
    if (n == 0 && arr[0] == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n + 1; i++)
    {
        printterm(arr[i], i, n);
    }
    return 0;
}
void printterm(int arr, int i, int n)
{
    if (n >= 2)
    {
        if (i == 0)
        {
            if (arr > 0)
            {
                if (arr != 1)
                {
                    cout << arr << "x^" << (n - i);
                    return;
                }
                else
                {
                    cout << "x^" << (n - i);
                    return;
                }
            }
            if (arr < 0)
            {
                if (arr != -1)
                {
                    cout << arr << "x^" << n - i;
                    return;
                }
                else
                {
                    cout << "-" << "x^" << n - i;
                    return;
                }
            }
        }
        if (i != 0 && i < n - 1)
        {
            if (arr != 0)
            {
                if (arr > 0)
                {
                    if (arr != 1)
                    {
                        cout << "+" << arr << "x^" << n - i;
                        return;
                    }
                    else
                    {
                        cout << "+" << "x^" << n - i;
                        return;
                    }
                }
                if (arr < 0)
                {
                    if (arr != -1)
                    {
                        cout << arr << "x^" << n - i;
                        return;
                    }
                    else
                    {
                        cout << "-" << "x^" << n - i;
                        return;
                    }
                }
            }
            else
            {
                return;
            }
        }
        if (i == n - 1)
        {
            if (arr > 0)
            {
                if (arr != 1)
                {
                    cout << "+" << arr << "x";
                    return;
                }
                else
                {
                    cout << "+" << "x";
                    return;
                }
            }
            if (arr < 0)
            {
                if (arr != -1)
                {
                    cout << arr << "x";
                    return;
                }
                else
                {
                    cout << "-" << "x";
                    return;
                }
            }
            else
            {
                return;
            }
        }
        if (i == n)
        {
            if (arr > 0)
            {
                cout << "+" << arr;
                return;
            }
            if (arr < 0)
            {
                cout << arr;
                return;
            }
            else
            {
                return;
            }
        }
    }
    if (n == 1)
    {
        if (i == 0)
        {
            if (arr > 0)
            {
                if (arr != 1)
                {
                    cout << arr << "x";
                    return;
                }
                else
                {
                    cout << "x";
                    return;
                }
            }
            if (arr < 0)
            {
                if (arr != -1)
                {
                    cout << arr << "x";
                    return;
                }
                else
                {
                    cout << "-" << "x";
                    return;
                }
            }
            else
            {
                return;
            }
        }
        if (i == 1)
        {
            if (arr > 0)
            {
                cout << "+" << arr;
                return;
            }
            if (arr < 0)
            {
                cout << arr;
                return;
            }
            else
            {
                return;
            }
        }
    }
    if (n == 0)
    {
        if (arr > 0)
        {
            cout << arr;
            return;
        }
        if (arr < 0)
        {
            cout << arr;
            return;
        }
        else
        {
            return;
        }
    }
}