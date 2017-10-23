#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		// array declere
	    int size;
		cin>>size;
		int a[size];
		int fullsum = 0;
		for(int i=0;i<size;i++)
		{
			cin>>a[i];
			fullsum += a[i];
		}
		
		// from s to l
		int s,l;
		cin>>s>>l;
		s=s-1;
		l=l-1;
		
		// got t for minimum backward distance
		int sum,j,t = 0;
		t = a[s];
		j = s;
		sum = 0;
		while(j!=l)
		{
			sum = sum + a[j];
            if(j==0)
		    {
			    j=size-1;
		    }
	        else
			{
			    j--;
	       	}
			if(t>=sum)
			{
				t = sum; 
			}
		}

		// sum between start to end
		
		int sumsl = 0;
		for(int i=l;i<size;i++)
		{sumsl+=a[i];
		}

		int k = a[s];
		int c = s;
		sum = 0;
		while(c!=l)
		{
			sum = sum + a[c];
            c = c+1;
			if(k>=sum)
			{
				k = sum; 
			}
		}

		// forward distance from s to l 
		int direct = 0;
		for(int i=s;i<=l;i++)
		{
			direct += a[i];
		}
		
		// backward distance from s to l 
		int backward = fullsum + a[s] + a[l] - direct;
		
		int duset = 2*t + direct - a[s];
		
		int dusek = 2*k + backward - a[s];
		
		int round = 2*fullsum - sumsl + a[l];
		
		int bobo[] = {direct,backward,duset,dusek,round};
		int min = bobo[0];
		for(int i=0;i<5;i++)
		{
			if(min>=bobo[i])
			{
				min = bobo[i];
			}
		}
		cout<<min<<endl;
	}
}
