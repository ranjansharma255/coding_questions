#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &a, int &target) {
	int n = a.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] + a[j] == target)
			{
				return {i, j};
			}
		}
	}
	return {};
}
int main()
{
	vector<int> a = {3, 3, 4};
	int target = 6;
	for (int &x : twoSum(a, target))
	{
		cout << x << " ";
	}
	cout << '\n';
}
