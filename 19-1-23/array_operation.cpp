#include<iostream>
using namespace std;
class ArrayOperation
{
	protected:
	int i,j;	
	int *a;
	public:
	void acceptArray(int arr[])
	{
		a=arr;
		
	}
	
};

class SortArray:public ArrayOperation
{
	protected:
	public:
	int performSorting()
	{
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(a[i]>a[j]){	
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
		
	}
	
	
}
for(i=0;i<5;i++)
{
	cout<<a[i]<<"\t";
	
}
}
};
class FindMax: public ArrayOperation
{
	protected:
	int max;
	public:
	int getMax()
	{
			max=a[0];
		for(i=1;i<5;i++)
		{
		
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"\nMaximum vakue in the array is:"<<max;
		
	}
	
};

class SearchValue: public ArrayOperation
{
	protected:
	int value,flag=0;
	//cout<<"Enter the value to search"<<endl;
	//cin>>value;
	public:
	int getValue(int value)
	{
		for(i=0;i<5;i++)
		{
			if(a[i]==value)
			{
				flag=1;
				break;
					//return 1;
			}	
		}
		
			if(flag)
			{
				cout<<"Value is found";
				return 1;
			}
			else
			{
				cout<<"value is not found";
				return -1;
			}
					
		
		
		
	}
	
};

int main()
{
  int choice,arr[5],i,value;
  cout<<"Enter the array values"<<endl;
  
  for(i=0;i<5;i++)
  {
  	cin>>arr[i];
  }
 
cout<<"Enter the choice"<<endl;
cin>>choice;

switch(choice)
{
	case 1:

  
  SortArray obj2;  //child class object.
  obj2.acceptArray(arr);
  obj2.performSorting();
  
  break;
  
  case 2:
  FindMax obj3;     //child class object 
  obj3.acceptArray(arr);
  obj3.getMax();
  break;
   
   case 3:
  SearchValue obj4;
  cout<<"\nEnter the value serach in array"<<endl;
  cin>>value;
  obj4.acceptArray(arr);
  //obj4.getValue(value);
  
  cout<<"\nResult for Serched value is "<<obj4.getValue(value);
  break;	
}
}
