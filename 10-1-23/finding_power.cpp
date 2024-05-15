#include<iostream>
using namespace std;

//Calculate the power..
class FindingPower
{
	private:
		int i,b,index1;
public:
	int  setValue(int base,int index)
	{
		b=base;
		index1=index;	
	}
	
	int calPower()
	{
		int p=1;
	    for(i=1;i<=index1;i++)
		{
			p=p*b;
			
		}
		return p;
		
	}
	
};

int main()
{
	int base,index,result,p;
	
	FindingPower power;
	cout<<"Enter the base and index"<<endl;
	cin>>base>>index;
	power.setValue(base,index);
	
	 result = power.calPower();
	
	cout<<"Power is "<<result;
	
}
