#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		long long count = 0;
        if(b<c)
		{
			count += (b-a+1)*(d-c+1)-1;
		}
		else if(b==c)
		{
			count += (b-a+1)*(d-c+1);
		}
		else if(b>c)
		{
			count += (d-a)*((d-a+1)/2)  -  (d-b)*((d-b-1)/2);
		}
		cout<<count;
	}
}
