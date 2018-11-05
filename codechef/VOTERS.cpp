#include<iostream>
#include<set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y, z;
	cin >> x >> y >> z;
	set<int> in;
	set<int> u;
	for(int i=0;i<x+y+z;i++)
	{
		int n;
		cin >> n;
		if(in.find(n)!=in.end())
			u.insert(n);
		in.insert(n);
	}
	cout << u.size() << "\n";
	set<int>::iterator it=u.begin();
	while(it!=u.end())
	{
		cout << *it << "\n";
		it++;
	}
	return 0;
}