#include<iostream>
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
		unsigned long int n, k;
		cin >> n >> k;
		if(k==0)
		{
			cout << "0 " << n << "\n";
			continue;
		}
		cout << (n/k) << " " << (n%k) << "\n";
	}
	return 0;
}