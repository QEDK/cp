// ankitmaity Long Challenge

#include<iostream>
#include<climits>
using namespace std;

inline unsigned long int dsum(unsigned long int x)
{
	return (x%9==0) ? 9 : (x%9);
}

int main()
{
	short int t;
	cin >> t;
	while(t--)
	{
		unsigned long int n, d, min=ULONG_MAX, ops=0, org=n;
		cin >> n >> d;
		while(1)
		{
			if(n<min)
				min=n;
			n=dsum(n);
			if(n<min)
				min=n;
			ops++;
			if(n==org)
				break;
			if(n==1)
				break;
			n+=d;
			ops++;
			if(n==org)
				break;
			if(n==1)
				break;
		}
		cout << n << " " << ops << "\n";
	}
	return 0;
}