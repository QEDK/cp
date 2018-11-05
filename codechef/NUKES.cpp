#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, n, k;
	cin >> a >> n >> k;
	for(int i=1;i<=k;i++)
	{
		cout << a%(n+1) << " ";
		a/=(n+1);
	}
	return 0;
}