#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n];
		int sum=0;
		int min=100;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			sum+=a[i];
			if(a[i]<min)
				min=a[i];
		}
		if((sum/x) == ((sum-min)/x))
			cout << "-1" << endl;
		else
			cout << (sum/x) << endl;
	}
	return 0;
}