#include<iostream>
#define max 20
using namespace std;

class bst{
	int top;
int arr[max];
	public:
		
		bst(){top=0;
		for(int i=0;i<max;i++)
		arr[i]=0;
		}
	
	void insert(int key)
	{
		if(top==0)
		{
			arr[top]=key;
			top=0;
			
		}
		
		else if(key<arr[top])
		{
			top=2*top+1;
			arr[top]=key;
			
		}
		else if(key>arr[top])
{
	top=2*top+2;
	arr[top]=key;
	
	}
		
	}
	
void search(int key)
{

	if(arr[top]==key)
	{
		cout<<"key is present in tree\n";
		
		
	}
	else if(key<arr[top])
	{
		
		top=2*top+1;
		search(key);
		
		
	}
	else if(key>arr[top])
	{
		
		top=2*top+2;
		search(key);
		
		
	}
	
	
	
}
	
	
	
	
	
	
};


int main()
{
	bst obj,abc,bcd;
	
	obj.insert(1);
	obj.insert(2);
	obj.insert(3);
	obj.insert(4);
	obj.insert(5);
	obj.insert(6);
	obj.insert(7);
	obj.insert(8);
	abc.search(1);


	
	
	return 0;

	
	
}
