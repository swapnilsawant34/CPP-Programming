#include<iostream>
using namespace std;

class Power
{
	private:
	int p=1,index,i,base;
	
	public:
	void setValues()
	{
		cout<<"Enter the base and index "<<endl;
		cin>>base>>index;
		
	}
	void calPower()
	{
		for(i=0;i<index;i++)
		{
			p=p*base;
		}
		cout<<"Power is "<<p;
	}
};
int main()
{
	Power pn;
	pn.setValues();
	pn.calPower();
}
