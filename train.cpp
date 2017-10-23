#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a;
		int b;
		int c;
		a = n/8;
		b = n%8;
		
		if(b==0)
		{
			b-=1;
			cout<<a*8+b<<"SL"<<endl;
		}
		else if(b==1)
		{
			b+=3;
			cout<<a*8+b<<"LB"<<endl;
		}
		else if(b==2)
		{
			b+=3;
			cout<<a*8+b<<"MB"<<endl;
		}
		else if(b==3)
		{
			b+=3;
			cout<<a*8+b<<"UB"<<endl;
		}
		else if(b==4)
		{
			b-=3;
			cout<<a*8+b<<"LB"<<endl;
		}
		else if(b==5)
		{
			b-=3;
			cout<<a*8+b<<"MB"<<endl;
		}
		else if(b==6)
		{
			b-=3;
			cout<<a*8+b<<"UB"<<endl;
		}
		else if(b==7)
		{
			b+=1;
			cout<<a*8+b<<"SU"<<endl;
		}
	}
}
