#include<iostream>

using namespace std;

class FindMax
{
	private:
		int *a,s,max;
		public:
			void acceptArray(int arr[],int size)
			{
			a=arr;
			s=size;	
			}
			int getMax(int size)
			{
				int i;
				 max=a[0];
				for(i=0;i<size;i++)
				{
						if(a[i]>max)
						{
							max=a[i];
						}
					return max;	
					
				}
				//	return max;	


			}
};

int main()
{
	int arr[10];
	int size,i;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	cout<<"Enter the array elements"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	FindMax max;
	max.acceptArray(arr,size);
	
	int result=max.getMax(size);
	cout<<"Maximum array elements is "<<result;
}
