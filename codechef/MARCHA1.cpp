#include<iostream>
using namespace std;

int SubsetSum(int a[], int n, int sum);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		if(SubsetSum(arr, n, m))
			cout << "Yes" << "\n";
		else
			cout << "No" << "\n";
	}
	return 0;
}

int SubsetSum(int a[], int n, int sum)
{
	if (sum == 0)
		return 1;
	if (n == 0 && sum != 0)
		return 0;
	if (a[n-1] > sum)
		return SubsetSum(a, n-1, sum);
	return SubsetSum(a, n-1, sum) || SubsetSum(a, n-1, (sum - a[n-1]));
}