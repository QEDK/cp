#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int x, y;
	while(t--)
	{
		cin >> x >> y;
		for(int i=(x+y+1);i<=INT_MAX;i++)
		{
			bool prime=true;
			for(int j=2;j<=(i/2);j++)
			{
				if(i%j == 0)
					prime=false;
			}
			if(prime == true)
			{
				cout << (i-(x+y)) << endl;
				break;
		 	}
		}
	}
	return 0;
}