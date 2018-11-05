#include<iostream>
#include<random>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int arr[n];
	int arr2[n];
	for(int i=1;i<=n;i++)
	{
		arr[i-1]=i;
		arr2[i-1]=i;
	}
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1, n);
	for(int i=1;i<=2;i++)
	{
		for(int k=1;k<=n;k++)
		{
			int j=distribution(generator);
			swap(arr[k-1], arr[j-1]);
			cout << arr[k-1] << " ";
		}
		cout << "\n";
	}
	return 0;
}
