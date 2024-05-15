#include<iostream>
using namespace std;

class AddAmount
{
	private:
	int initial_amount=50;
	int total_amount;
	int amount;
	int final_amount;
	public:
	AddAmount() //without parameter
	{
		this->amount=amount;
		this->initial_amount=initial_amount;
		initial_amount=0;
		cout<<"Enter the amount"<<endl;
		cin>>amount;
		
		int final_amount=initial_amount+amount;
		if(final_amount==amount)
		{
			cout<<"No amount will be added to piggie bank"<<endl;
			cout<<"\nFinal amount is "<<final_amount;
		}		
		
	}	
	AddAmount(int amount) //with parameter
	{
		this->amount=amount;
		int final_amount=initial_amount+amount;
		cout<<"Final amount is "<<final_amount;				
	}
};

int main()
{
	//int initial_amount=50;
	AddAmount a1;
     int amount;
	
	cout<<"\nEnter the amount:"<<endl;
	cin>>amount;
	
	AddAmount a2(amount);
}

