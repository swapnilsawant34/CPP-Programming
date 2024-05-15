#include<iostream>
using namespace std;

class MissingArray
{
	protected:
	
		public:
		virtual void missing_element(int a[])=0;
};

class FindMissing: public MissingArray
{
	public:
		int *arr;
		void missing_element(int a[])
		{
			this->arr=a;
			
			cout<<"Missing Elements are"<<endl;
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<arr[i+1];j++)
				{
					
					if(j>arr[i] && j<arr[i+1])
					{
						cout<<"\n"<<j;
					}
				}
			}
			
		}
};

int main()
{
	int a[17],i;
	cout<<"Enter the array element"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	FindMissing m;
//	m.getArray(a);
	m.missing_element(a);
	
	
	
	
}
