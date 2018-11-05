// ankitmaity Long Challenge '18 HMAPPY

#include<iostream>
#include<map>
using namespace std;

#define lli unsigned long long int
#define li unsigned long int

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	map<li, li> mappy;
	li n;
	lli m;
	cin >> n >> m;
	lli arr[n];
	lli brr[n];
	lli crr[n];
	for(li i=0;i<n;i++)
		cin >> arr[i];
	for(li i=0;i<n;i++)
		cin >> brr[i];
	lli max=0;
	li location;
	for(li i=0;i<n;i++)
	{
		for(li j=0;j<n;j++)
		{
			if(j==crr[i-1])
				continue;
			if(max<(arr[j]*brr[j]))
			{
				max=arr[j]*brr[j];
				location=j;
			}
		}
		crr[i]=location;
		cout << location << "\n";
		max=0;
	}
}