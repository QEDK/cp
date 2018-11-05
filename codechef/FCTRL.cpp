#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int zero;
	for(int i=0;i<n;i++)
	{
		int num=a[i];
		zero=0;
		while (num>=5)
		{
			num/=5;
			zero+=num;
		}
		cout << zero << endl;
	}
	return 0;
}