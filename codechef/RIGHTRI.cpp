#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int count=0;
	cin >> n;
	while(n--)
	{
		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int s1=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
		int s2=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
		int s3=((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3));
		if((s1==(s2+s3)) || (s2==(s1+s3)) || (s3==(s1+s2)))
			count++;
	}
	cout << count;
	return 0;
}