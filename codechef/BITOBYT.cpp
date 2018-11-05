// ankitmaity Long Challenge '18 BITOBYT

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		short int n;
		cin >> n;
		long long int bi=1, ni=0, by=0;
		if(n>26)
		{
			// calculate with nearest to 26ms cycle
			if((n%26)>0)
			{
				bi=(long long int)pow(2,(n/26));
			}
			else if((n%26)==0)
			{
				by=(long long int)pow(2,(n/26)-1);
				bi=0;
			}
			// check after 26ms to find if bit evolves
			if((n%26) > 10)
			{
				by=bi;
				bi=0;
				goto a;
			}
			else if((n%26) > 2)
			{
				ni=bi;
				bi=0;
			}
		}
		else
		{
			// check for under 26 cycles
			if(n > 10)
			{
				by=bi;
				bi=0;
				goto a;
			}
			else if(n > 2)
			{
				ni=bi;
				bi=0;
			}
		}
		a:cout << bi << " " << ni << " " << by << "\n";
	}
	return 0;
}