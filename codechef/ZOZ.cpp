#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int arr[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			sum+=arr[i];
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			int s=(sum-arr[i]);
			if((k+arr[i]) > s)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}