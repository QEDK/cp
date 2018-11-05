// ankitmaity Long Challenge October '18 CHSERVE

#include<iostream>
using namespace std;

#define li unsigned long int
#define lli unsigned long long int

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	li t;
	cin >> t;
	while(t--)
	{
		lli p1, p2, k;
		cin >> p1 >> p2 >> k;
		if(k==0)
		{
			cout << "CHEF" << "\n";
			continue;
		}
		if((p1+p2) < (2*k))
		{
			if((p1+p2) < k)
				cout << "CHEF" << "\n";
			else
				cout << "COOK" << "\n";
			continue;
		}
 		else if(((p1+p2)%(2*k)) < k)
			cout << "CHEF" << "\n";
		else
			cout << "COOK" << "\n";
	}
	return 0;
}