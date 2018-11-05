#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		string m, w;
		cin >> m >> w;
		string out="";
		if(m.length() == w.length())
		{
			if(m.compare(w)==0)
				cout << "YES" << "\n";
			else
				cout << "NO" << "\n";
		}
		else
		{
			bool flag=false;
			int c=0;
			if(m.length() > w.length())
			{
				for(int i=0;i<m.length();i++)
				{
					string sub=w.substr(c, w.length()-1);
					if(sub.find(m.at(i)) != -1)
					{
						out+=m.at(i);
						if(out.compare(w) == 0)
						{
							flag=true;
							break;
						}
						c++;
					}
				}
			}
			else
			{
				for(int i=0;i<w.length();i++)
				{
					string sub=m.substr(c, m.length()-1);
					if(sub.find(w.at(i)) != -1)
					{
						out+=w.at(i);
						if(out.compare(m) == 0)
						{
							flag=true;
							break;
						}
						c++;
					}
				}
			}
			cout << out;
			if(flag)
				cout << "YES" << "\n";
			else
				cout<< "NO" << "\n";
		}
	}
	return 0;
}