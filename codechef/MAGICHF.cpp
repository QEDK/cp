#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, x, s;
		cin >> n >> x >> s;
		int pos=x;
		for(int i=0;i<s;i++)
		{
			int p, q;
			cin >> p >> q;
			if(p==pos)
			{
				pos=q;
			}
			else if(q==pos)
			{
				pos=p;
			}
		}
		cout << pos << "\n";
	}
	return 0;
}