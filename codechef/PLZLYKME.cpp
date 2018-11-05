#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	a:while (t--)
	{
		int l, d, s, c;
		cin >> l >> d >> s >> c;
		if((s * pow(c+1, d-1)) >= l)
		{
			cout << "ALIVE AND KICKING\n";
			goto a;
		}
		cout << "DEAD AND ROTTING\n";
	}
	return 0;
}