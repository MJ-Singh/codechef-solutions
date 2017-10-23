#include<iostream>
using namespace std;
int main(){
	int test,k,count;
	cin>>test;
	while(test--){
		int size;
		cin>>size;
		int a[size];
		for(int i=0;i<size;i++)
		{
			cin>>a[i];
		}
		count = 0;
		for(int i=0;i<size;i++)
		{
			int j = a[i];
			k = (i+j+1)%size;
			for(int s=0;s<size;s++)
			{
				if( k == i)
				{
					count++;
					break;
				}
				else{
				     k = (k + a[k] + 1) % size;
				 }
			}
		}
		cout<<count<<endl;
	}
}
