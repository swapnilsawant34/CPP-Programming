#include<iostream>
using namespace std;
class ReverseArray
{
	private:
	int *arr,i,temp;
	public:
	void acceptArray(int a[])
	{
		arr=a;
	}
	
	int reversearray()
	{
		for(i=0;i<5/2;i++){
		
		temp=arr[i];
		arr[i]=arr[5-i-1];
		arr[5-i-1]=temp;
			
	}
	//return arr[i];
		
	cout<<"Reverse array is"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	
    }
    //return arr[i];
}

};

int main()
{
	int a[5];
	int i;
	
	//int *result;
	cout<<"Enter the array elements"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	ReverseArray ra;
	
	ra.acceptArray(a);
	ra.reversearray();
	
	//result[5]=ra.reversearray();
	
	//out<<"Reverse array is "<<result;
}
