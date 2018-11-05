#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int s[n];
		for(int i=0;i<n;i++)
			cin >> s[i];
		sort(s, s+n);
		int diff=999999999;
		for(int i=1;i<n;i++)
			diff = (s[i]-s[i-1] < diff) ? (s[i]-s[i-1]) : diff;
		cout << diff << "\n";
	}
	return 0;
}