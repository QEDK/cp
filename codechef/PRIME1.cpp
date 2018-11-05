#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x, y;
		cin >> x >> y;
		for(int i=x;i<=y;i++)
		{
			int c=0;
			for(int j=2;j*j<=i;j++)
			{
				if(i%j == 0)
				{
					c=1;
					break;
				}
			}
			if(c==0 && i!=1)
				cout << i << endl;
		}
	}
	return 0;
}