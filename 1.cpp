#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	while(x--)
	{
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2)
			if(y1<y2)
				cout<<"up"<<endl;
			else
				if(y1>y2)
					cout<<"down"<<endl;
				else cout<<"sad"<<endl;
		else
			if(y1==y2)
				if(x1<x2)
					cout<<"right"<<endl;
				else
					if(x1>x2)
						cout<<"left"<<endl;
					else cout<<"sad"<<endl;
			else cout<<"sad"<<endl;
	}
}
