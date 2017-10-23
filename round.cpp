#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		 int size;
		cin>>size;
		int a[size];
		int nod = 0;
		for(int i=0;i<size;i++)
		{
			cin>>a[i];
			nod += a[i];
		}
		int s,l;
		cin>>s>>l;
		s--;
		l--;
		int sum,j,t = 0;
		t = a[s];
		while(j!=l)
		{
			j = s;
			sum += a[j];
			j = (j-1)%size;
			if(t>sum)
			{
				t = sum; 
			}
		}
		int direct = 0;
		for(int i=s;i<=l;i++)
		{
			direct += a[i];
		}
		int piche = nod - direct + a[s] + a[l];
		cout<<"t  "<<t<<endl;
		cout<<"nod  "<<nod<<endl;
		cout<<"direct  "<<direct<<endl;
	}
}
