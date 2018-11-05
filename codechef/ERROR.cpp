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
		string s;
		cin >> s;
		if(s.find("101")!=-1 || s.find("010")!=-1)
			cout << "Good" << "\n";
		else
			cout << "Bad" << "\n";
	}
	return 0;
}