#include<iostream>
#include<algorithm>
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
		int n, m;
		cin >> n >> m;
		string check;
		string tests;
		string valid="";
		for(int i=0;i<m;i++)
			valid+="1";
		int flag=1; //assume state is fine
		for(int i=0;i<n;i++)
		{
			cin >> check >> tests;
			if(check=="correct" && tests!=valid)
				flag=-1; //invalid
			if(check=="wrong" && tests==valid && flag!=-1)
				flag=0; //weak
		}
		if(flag==1)
			cout << "FINE" << "\n";
		if(flag==0)
			cout << "WEAK" << "\n";
		if(flag==-1)
			cout << "INVALID" << "\n";
	}
	return 0;
}