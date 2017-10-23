# include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	while(x--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(n==1)
		{
			cout<<"yes"<<endl;
			continue;
		}
		int c=0,d=0,e=0,f=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>1) c++;
			if(a[i]<-1) d++;
			if(a[i]==1) e++;
			if(a[i]==-1) f++;
		}
		if(c>0&&d>0)
		{
			cout<<"no"<<endl;
			continue;
		}
		else
			if(c==0&&d==0)
				if(f>1&&e==0) cout<<"no"<<endl;
				else cout<<"yes"<<endl;
			else
				if(f>0) cout<<"no"<<endl;
				else
					if((c==0&&d==1)||(c==1&&d==0)) cout<<"yes"<<endl;
					else cout<<"no"<<endl;
	}
}
