#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr+n);
		int sum1=0, sum2=0, sum3=0, sum4=0;
		for(int i=0;i<n;i++)
		{
			if(i>=k)
				sum1+=arr[i];
			if(i>=(n-k))
				sum2+=arr[i];
			if(i<k)
				sum3+=arr[i];
			if(i<(n-k))
				sum4+=arr[i];
		}
		cout << abs(((sum1<sum2) ? (sum4-sum2) : (sum3-sum1))) << "\n";
	}
	return 0;
}