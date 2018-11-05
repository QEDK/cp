#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		char j[100], s[100];
		cin >> j >> s;
		int c=0;
		for(int i=0;i<strlen(j);i++)
		{
			for(int i2=0;i2<strlen(s);i2++)
			{
				if(s[i2]==j[i])
				{
					c++;
					s[i2]=' ';
				}
			}
		}
		cout << c << "\n";
	}
	return 0;
}