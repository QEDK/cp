#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned long long int a;
	cin >> a;
	if(a==0 || a==1 || a==3 || (a%6==0) || (a%6==1) || (a%6==3))
		cout << "yes" << "\n";
	else
		cout << "no" << "\n";
	return 0;
}