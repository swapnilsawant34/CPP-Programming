#include<iostream>
using namespace std;
class Prime
{
	private:
	int i,no,flag=0;
	
	public:
		void acceptValue()
		{
			cout<<"Enter the Number ";
			cin>>no;
		}
		
		void checkPrime()
		{
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
				cout<<"Number is Prime";
			}
			else
			{
				cout<<"Number is not Prime";
			}
			
		}
};

int main()
{
	Prime p;
	p.acceptValue();
	p.checkPrime();
}
