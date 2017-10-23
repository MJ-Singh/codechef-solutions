#include<iostream>
using namespace std;
int max(int num1, int num2);
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	

	
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	b[0] = a[0];
	b[1] = a[1];
	b[2] = max(a[0] + a[2],a[1]);
	for(int i=3;i<n;i++)
	{
	 b[i] = max(a[i] + b[i-2] , a[i] + b[i-1]);
	}
    for(int i=0;i<n;i++)
	{
		cout<<b[i]<<"\t";
	}
	
	
}

   int max(int num1, int num2) 
   {

       int result;
 
       if (num1 > num2)
            result = num1;
       else
            result = num2;
 
       return result; 
    }
	
