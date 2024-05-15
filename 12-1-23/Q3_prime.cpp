#include<iostream>
using namespace std;

class CheckPrime
{
	private:
	int no;
	public:
	void setValue(int value)
	{
		no=value;
		
	}
	
	int checkPrime()
	{
		int i,flag=0;
		for(i=2;i<no;i++)
			{
				
			if(no%i==0)
			{
				flag=1;
				break;
				
			}
			i++;
		}
			if(flag==0)
			{
				cout<<"Number is Prime"<<endl;
				return 1;
			}
			else
			{
				cout<<"Number is not Prime"<<endl;
				return -1;
			}
		
	}
};

int main()
{
	int value;
	cout<<"Enter the number"<<endl;
	cin>>value;
	
	CheckPrime p;
	p.setValue(value);
	
	int result=p.checkPrime();
	
	cout<<"Result is "<<result;
}
