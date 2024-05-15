#include<iostream>
using namespace std;

class searchValue
{
	private:
	int *arr,s;
	public:
	int setValue(int a[])
	{
		arr=a;
		//size=s;
		
		
		
	}
	
	int searchValue1(int value)
	{
		int i;
		cout<<"Enter the value for search"<<endl;
		cin>>value;
		
		
		for(i=0;i<5;i++)
		{
			
		if(arr[i]==value)
		{
			return 1;
			break;
			
		}
		
}
			return -1;
		
	
		
	}
};

int main()
{
	
	searchValue sv;
	int a[5];
	int size,i,value;
	//cout<<"Enter the size of array";
	//cin>>size;
	cout<<"Enter the array elements"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	sv.setValue(a);
	
	int result;
	result=sv.searchValue1(value);
	
	cout<<"result is "<<result;
}
