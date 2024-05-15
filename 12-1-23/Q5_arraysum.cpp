#include<iostream>
using namespace std;

class SumArray
{
	private:
		int *a;
		int s;
	public:
	void acceptArray(int arr[],int size)
	{
		a=arr;
		s=size;
		
	}
	
	int getSum(int size)
	{
		int sum=0;
		int i;
		for(i=0;i<size;i++)
		{
			sum=sum+a[i];
		}
		return sum;
	}
};

int main()
{
	int arr[10],size,i;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	cout<<"Enter the array element"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	 SumArray s;
	 s.acceptArray(arr,size);
	 int result=s.getSum(size);
	 
	 cout<<"Sum of all elements in the array:"<<result;
	 
}
