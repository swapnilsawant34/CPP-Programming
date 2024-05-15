#include<iostream>
using namespace std;

class CheckPalimNum
{
	private:
		int no;
		
	public:
		void setValue(int value)
		{
			no=value;
		}
		
		int checkNumPalim()
		{
			int temp=no;
			int rem;
			int sum=0;
			
			while(no>0)
			{
				
				rem=no%10;
				sum=(sum*10)+rem;
				no=no/10;
			}
			if(temp==sum)
			{
				cout<<"Number is pallidrome\n";
				return 1;
			}
			else
			{
				cout<<"Number is not pallidrome\n";
				return -1;
			}
		}
		
};

int main()
{
	int value;
	cout<<"Enter the number"<<endl;
	cin>>value;
	
	CheckPalimNum p;
	
	p.setValue(value);
	int result=p.checkNumPalim();
	
	cout<<"Result is "<<result;
	
}
