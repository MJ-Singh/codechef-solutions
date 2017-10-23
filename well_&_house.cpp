#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(i==0)
		{
			b[i] = a[i];
		}
		else if(i==1)
		{
			if(a[i]>=a[i-1])
			{
				b[i] = a[i];
			}
			else
			{
				b[i] = a[i-1];
			}
		}
		else
		{
			b[i] = a[i] + b[i-2];
		}
	}
	int k;
	k = b[n-2];
	for(int i=1;i<n;i++)
	{
		if(i==1)
		{
			b[i] = a[i];
		}
		else if(i==2)
		{
			if(a[i]>=a[i-1])
			{
				b[i] = a[i];
			}
			else
			{
				b[i] = a[i-1];
			}
		}
		else
		{
			b[i] = a[i] + b[i-2];
		}
	}
	
	if(k<=b[n-1])
    {
    	cout<<b[n-1]<<endl;
	}
	else
	{
		cout<<k<<endl;	
	}	
	
}
