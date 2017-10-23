#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int size;
		int t,r;
		t = r = 0;
		int sum = 0;
		cin>>size;
		int a[size];
		for(int i=0;i<size;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<size;i++)
		{
			if(a[i] == 2)
			{
				r = 1;
			}
			sum = sum + a[i];
			if(a[i] == 5)
			{
				t = 1;
			}
		}
		cout<<t<<"   "<<r<<endl;
		double av = sum/size;
		if(t==1 && r==0 && (av)>=4.0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}
