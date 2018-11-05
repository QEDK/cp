#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string a;
		cin >> a;
		string str1;
		string str2;
		if(a.length()%2==0)
		{
			str1=a.substr(0,a.length()/2);
			str2=a.substr(a.length()/2,a.length()/2);

		}
		else
		{
			str1=a.substr(0,a.length()/2);
			str2=a.substr(a.length()/2+1,a.length()/2);
		}
		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());
		if(str1.compare(str2) == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}