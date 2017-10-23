#include<iostream>
using namespace std;
int max(int i,int j,int a[])
{
	int m = 0;
 	for(int k=i;k<=j;k++)
 	{
    	if(m<a[k])
 		{
 			m = a[k];
		 }
	 }
	 return m;
}
int main()
{
     int size;
	 cin>>size;
	 int a[size];
	 for(int i=0;i<size;i++)
	 {
	 	cin>>a[i];
	 }	
	 int l,t,i=0;int j;bool f = true;
	 while(i<size)
	 {  if(f)
	   {
	 	j = i+1;
	 	f = false;
	   }
	 	if(j<size)
        {
		 	if((a[i]&a[j]) == a[i] || (a[i]&a[j]) == a[j])
			{
			    l = 1;
			}
	 		else
			{
			    l = 0;
			}
	 		t += max(i,j,a)*l;
	        j++;
		}
	    else
		{
        	i++;
        	f= true;
		}
	 }cout<<t<<endl;
	 
	 
}

