# include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	while(x--)
	{
		int d;
		cin>>d;
		int a=d%9;
		cout<<a+1<<endl;
	}
}
