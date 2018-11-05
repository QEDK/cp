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
		int coal[n];
		for(int i=0;i<n;i++)
			cin >> coal[i];
		int tax[n-1];
		for(int i=0;i<n-1;i++)
			cin >> tax[i];
		int policy[n-1];
		for(int i=0;i<n-1;i++)
			cin >> policy[i];
		int minp=coal[0];
		int stax=0;
		int scoal=coal[0];
		for(int i=0;i<n-1;i++)
		{
			scoal+=coal[i+1];
			stax+=(tax[i]*policy[i]);
			if((scoal-stax) > minp)
				minp=scoal-stax;
		}
		cout << minp << endl;
	}
}