#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int g;
		cin >> g;
		while(g--)
		{
			int i, n, q;
			cin >> i >> n >> q;
			array<char, 1000> c;
			if(i==1)
				c.fill('H');
			else if(i==2)
				c.fill('T');
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<=i;j++)
				{
					if(c[j]=='H')
						c[j]='T';
					else if(c[j]=='T')
						c[j]='H';
				}
			}
			int count=0;
			for(int i=0;i<n;i++)
			{
				if(q==1 && c[i]=='H')
					count++;
				else if(q==2 && c[i]=='T')
					count++;
			}
			cout << count << endl;
		}
	}
	return 0;
}