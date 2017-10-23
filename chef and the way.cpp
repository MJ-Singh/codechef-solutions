#include<iostream>
using namespace std;
int main()
{
	int m,b;
	cin>>m>>b;
	m++;
	int a[m],t=1;
	for(int i=1;i<m;i++)
	{
		cin>>a[i];
	}
	for(int i=m-1;i>=1;i-=b)
	{
		t *= (a[i]%1000000007);
	}
	cout<<(t%1000000007)<<endl;
}
