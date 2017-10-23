#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	n++;
	int a[n],f=1;
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=n-1;i>=1;i-=k)
	{
		f*=(a[i]%1000000007);
	}
	cout<<(f%1000000007)<<endl;
}
