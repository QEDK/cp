#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str="abcdefghijklmnopqrstuvwxyz";
	int t;
	string s;
	cin >> t >> s;
	while(t--)
	{
		string in;
		cin >> in;
		for(int i=0;i<in.length();i++)
		{
			if(isalpha(in.at(i)))
			{
				char ch=tolower(in.at(i));
				for(int j=0;j<s.length();j++)
				{
					char ch2=str.at(j);
					if(ch == ch2)
					{
						if(islower(in.at(i)))
							cout << s.at(j);
						else if(isupper(in.at(i)))
						{
							char up=toupper(s.at(j));
							cout << up;
						}
					}
				}
			}
			else if(in.at(i) == '_')
				cout << ' ';
			else
				cout << in.at(i);
		}
		cout << "\n";
	}
	return 0;
}