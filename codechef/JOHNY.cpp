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
		int s;
		cin >> s;
		int a[s];
		int t[s];
		for(int i=0;i<s;i++)
		{
			cin >> a[i];
			t[i]=a[i];
		}
		int l;
		cin >> l;
		sort(t,t+s);
		for(int i=0;i<s;i++)
		{
			if(t[i]==a[l-1])
			{
				cout << (i+1) << "\n";
				break;
			}
		}
	}
	return 0;
}