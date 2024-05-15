#include<iostream>
using namespace std;

class NumberOperation
{
	protected:
		int no,i,j;
		public:
	void setValue(int no)
	{
		this->no=no;
	}
};

class CountDigit:public  NumberOperation
{
	protected:
		int count=0;
	public:
		int getDigitCount()
		{
			while(no!=0)
			{
				no=no/10;
				count++;
			}
			cout<<"\nDigit in count is "<<count;
		}
	
	
};

class Reversenumber:public NumberOperation
{
	protected:
		int rem,rev;
	public:
	int getReverse()
	{
		
		while(no!=0)
		{
			rem=no%10;
			no=no/10;
			rev=rev*10+rem;
		}
		cout<<"\nReversd number is "<<rev;
		
		
	}
	
	
};

class CheckPrime:public  NumberOperation
{
	
	public:
		int checkPrime()
		{
				int flag=0;
		for(i=2;i<no;i++)
			{
				
			if(no%i==0)
			{
				flag=1;
				break;
				
			}
			//i++;
		}
			if(flag==0)
			{
				cout<<"\nNumber is Prime"<<endl;
				return 1;
			}
			else
			{
				cout<<"\nNumber is not Prime"<<endl;
				return -1;
			}
			
		}
	
}; 

int main()
{
	int no;
	cout<<"Enter the number:"<<endl;
	cin>>no;
	
	CountDigit obj1;
	obj1.setValue(no);
	obj1.getDigitCount();
	
	Reversenumber obj2;
	obj2.setValue(no);
	obj2.getReverse();
	
	CheckPrime obj3;
	obj3.setValue(no);
	
	cout<<"\nResult for prime number is "<<obj3.checkPrime();
}
