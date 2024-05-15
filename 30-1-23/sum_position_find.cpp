#include<iostream>
using namespace std;

class SubArray
{
	private:
		int *arr,i,j,size1;
		public:
	SubArray(int a[],int size)
	{
		arr=a;
		size1=size;
		
	}
	
	void getPosition(int size)
	{
		int sum,s;
		cout<<"Enter the Sum"<<endl;
		cin>>s;
		
		for(i=0;i<size1;i++)
		{
			sum=arr[i];
			for(j=i+1;j<size1;j++)
			{
				if(sum==s)
				{
					cout<<i+1;
					cout<<j;
				}
				if(sum>s || j==size1)
				break;
				sum=sum+arr[j];
			}
		}
	}
	
};


int main()
{
	int a[10],size;
	
	cout<<"Enter the Size of array"<<endl;
	cin>>size;
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	SubArray s(a,size);
	s.getPosition(size);
	
} 
