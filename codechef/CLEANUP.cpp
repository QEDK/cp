#include<iostream>
#include<algorithm>
using namespace std;

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
		fill(arr, arr+n, 0);
		while(m--)
		{
			int index;
			cin >> index;
			arr[index-1]=1;
		}
		int c=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0 && c==0)
			{
				cout << i+1 << " ";
				c=1;
			}
			else if(arr[i]==0 && c==1)
			{
				c=0;
			}
		}
		cout << "\n";
		c=1;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0 && c==0)
			{
				cout << i+1 << " ";
				c=1;
			}
			else if(arr[i]==0 && c==1)
			{
				c=0;
			}
		}
		cout << "\n";
	}
	return 0;
}