#include<iostream>
#include<cmath>
#include<map>
using namespace std;

typedef long long int lli;

map<lli, lli> coin;

lli truevalue(lli y)
{
	if(y==0)
		return 0;
	else if(coin[y]>0)
		return coin[y];
	else
		return coin[y] = max(y,truevalue(y/2) + truevalue(y/3) + truevalue(y/4));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli x;
	while(cin >> x)
	{
		cout << truevalue(x) << "\n";
	}
	return 0;
}