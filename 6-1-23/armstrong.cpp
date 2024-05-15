#include<iostream>
#include<math.h>

//Find armstrong number with return 1 or -1.
using namespace std;

class Armstrong
{
	private:
	int num;
	public:
	int setValue(int no)
	{
		num=no;
	}
	
	int checkArmstrong()
	{
			int rem,temp,p,count=0,sum=0;
	temp=num;
	int no1=num;
	while(num!=0)
	{
		num=num/10;
	
		++count;
	}
	//temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		
		
		p=pow(rem,count);
		sum=sum+p;
		temp=temp/10;
	}
	
	if(sum==no1)
	{
		
		//cout<<"Number is Aramstrog\n";
		return 1;
	}
	else
	{
		//cout<<"Number is not Armstrong\n";
		return -1;
	}	
	}
};

int main()
{
	int no;
	int result;
	
	cout<<"Enter the Number "<<endl;
	cin>>no;
	
	Armstrong an;
	an.setValue(no);
	
	result=an.checkArmstrong();
	
	cout<<"Result is "<<result;
}
