#include<iostream>
using namespace std;
class FindDuplicate
{
	int *arr;
	public:
	void setValue(int a[])
	{
		arr=a;
	}
	
	void findDuplicate1()
	{
		for(i=0;i<5;i++)
		{
			int count=0;
			if(arr[i]==arr[i+1])
			{
				count++;
			}
			cout<<"Duplicate value in an array"<<count;
			
			else{
				cout<<"Duplicate value not found ";
			}
		}
		
	}
}

int main()
{
	int a[5];
	
	cout<<"Enter the array elements"<<endl;	
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
    FindDuplicate fd;
    
    fd.setValue(a);
    
    
}
