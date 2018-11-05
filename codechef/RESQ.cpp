#include<iostream>
#include<cmath>
using namespace std;

#define lli long long int

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		lli n;
		cin >> n;
		lli d=1;
		for(lli i=sqrt(n);i>1;i--)
		{
			if(n%i==0)
			{
				d=i;
				break;
			}
		}
		cout << abs(n/d - d) << "\n";
	}
	return 0;
}