#include<iostream>
using namespace std;
int max(int i,int j,int a[])
{
	int m = a[i];
 	for(int k=i;k<=j;k++)
 	{
    	if(m<=a[k])
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
	 int l,t=0;
	 for(int i=0;i<size;i++)
	 {
	 	for(int j=i+1;j<size;j++)
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
	 		
		 }
	 }cout<<t<<endl;
	 
	 
}

