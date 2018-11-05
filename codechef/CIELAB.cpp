#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	string s = to_string(x-y);
	for(int i=0;i<s.length();i++)
	{
		int c=((int)s[i]) - 48;
		if(i!=(s.length() - 1))
		cout << c;
		else
		{
			if(c==9)
				cout << (c-1);
			else
				cout << (c+1);
		}
	}
	return 0;
}