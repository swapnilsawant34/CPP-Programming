#include<iostream>
using namespace std;

class Factorial
{
	private:
	int f=1,no,i;
	
	public:
	void acceptNumber()
	{
		cout<<"Enter the number "<<endl;
		cin>>no;
	}
	
	void calFactorial()
	{
		for(i=1;i<=no;i++)
		{
			f=f*i;
		}
		cout<<"Factorial is "<<f;
	}
};

int main()
{
	Factorial fact;
	fact.acceptNumber();
	fact.calFactorial();
}

