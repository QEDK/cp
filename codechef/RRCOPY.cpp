#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			bool flag=true;
			for(int j=0;j<i;j++)
			{
				if(arr[i]==arr[j])
				{
					flag=false;
					break;
				}
			}
			if(flag==true)
				count++;
		}
		cout << count << "\n";
	}
	return 0;
}