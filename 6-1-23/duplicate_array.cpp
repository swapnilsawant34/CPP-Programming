#include<iostream>
using namespace std;
class FindDuplicate
{
	private:
	int *arr,i,j;
	public:
	void setValue(int a[])
	{
		arr=a;
	}
	
	int findDuplicate()
	{
		for(i=0;i<5;i++)
		{
			for(j=(i+1);j<5;j++)
			{
			
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				    arr[i]=arr[j];
				    arr[j]=temp;	
				
		}
				
		}
	}
		for(i=0;i<5;i++)
		{
			if(arr[i]==arr[i+1])
			{
				cout<<"Duplicate element in an array "<<arr[i];
			}
		//	return arr[i];
		}
		
	
	}
};

int main()
{
	FindDuplicate fd;
	int a[5],i;
	int result;     
	cout<<"Enter the array elements"<<endl;	
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
    fd.setValue(a);
    
    fd.findDuplicate();
    // result=fd.findDuplicate();
     //cout<<"Duplicate elements are "<<result;

}
