#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector <int> arr1;
	vector <int> arr2;
	int n,i,a,k=0;
	int it;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		arr1.push_back(a);
		arr2.push_back(a);
	}
	sort(arr1.begin(), arr1.end());
	cin >> it;
	for (auto element : arr1) 
	{
		cout << element << " ";
	}
	cout << endl;
	for (i = 0; i < arr1.size(); i++)
	{
		if (arr1.at(i) != arr2.at(i))
		{
			k = k;
		}
		else
			k = k + 1;
	}
	if (k == arr1.size())
	{
		cout << "ordered" << " ";
	}
	else
		cout << "unordered" << " ";
	auto t=find(arr1.begin(), arr1.end(), it);
	if (t!= arr1.end())
	{
		cout << "1" << " " << t - arr1.begin();
	}
	else
	{
		cout << "0" << " " << "-1";
	}
	return 0;
}