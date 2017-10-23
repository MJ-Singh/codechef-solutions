#include<iostream>
using namespace std;
int alter(int a[],int l,int sl,int j,int count,int n);
int main()
{
	int n;
	cin>>n;
	int a[n];
	int count;
	int k[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		count = 0;
		k[i] = alter(a , 0 , 0 , i , 0 , n);
	}
	for(int i=0;i<n;i++)
	{
		cout<<k[i]<<"\t";
	}
}
int alter(int a[],int l,int sl,int j,int count,int n)
{
    if(count == 0)
	{
		l = a[j];
		sl = 0;
		j++;
		count++;
	}
	else if(count == 1 && a[j]!=l)
	{
		sl = l;
		l = a[j];
		count++;
		j++;
	}
	else if(a[j]==l)
	{
		l = a[j];
	    j++;
	}
	else if(((a[j]>l && a[j]<sl)  ||  (a[j]<l && a[j]>sl)) || ((a[j]>l && sl>l)||(a[j]<l && sl<l)))
	{
		sl = l;
		l = a[j];
		count++;
		j++;
	}
	else if((a[j]>l && l>sl)||(a[j]<l && l<sl))
	{
		l = a[j];
		j++;
	}
	if(j == n)
	{
		return count;
	}
	else
	{
		alter(a,l,sl,j,count,n);
	}
	
}

