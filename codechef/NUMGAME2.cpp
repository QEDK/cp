#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int player=0; // 0 = BOB, 1 = ALICE
		while(n!=1)
		{
			for(int i=n-1;n>=1;n--)
			{
				int prime=0;
				int flag=0;
				for(int j=2;j*j<=i;j++)
				{
					if((i%j == 0) && (i!=1))
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					n-=prime;
					if(player == 0)
						player = 1;
					else
						player = 0;
				}
			}
		}
		if(player == 0)
			cout << "ALICE" << endl;
		else
			cout << "BOB" << endl;
	}
	return 0;
}