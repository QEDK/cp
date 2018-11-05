#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long int t;
	cin >> t;
	while(t--)
	{
		long int n, c=0;
		cin >> n;
		char s[n+1];
		cin >> s;
		for(long int i=0;i<=n;i++)
		{
			for(long int j=0;(i+j)<n;j++)
			{
				if(s[j]=='1' && s[j+i]=='1')
					c++;
			}
		}
		cout << c << "\n";
	}
	return 0;
}