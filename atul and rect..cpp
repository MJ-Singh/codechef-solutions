#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
		int t;
		t = ((n+1)*n)/2;
		int sum = 0;
		for(int i=0;i<k;i++)
		{
			sum += t*(n-i);
		}
		cout<<sum<<endl;
	}
}
