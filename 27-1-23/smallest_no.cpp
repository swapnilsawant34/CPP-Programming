#include<iostream>
using namespace std;

class Small
{
	private:
	int no1,no2;
	
	public:
		void setvalue(int no1,int no2);
		void friend findsmall(Small s);	
};
void Small::setvalue(int no1,int no2)
{
	this->no1=no1;
	this->no2=no2;
}

void findsmall(Small s)
{
	if(s.no1>s.no2)
	{
		cout<<"smallest number is"<<s.no2;
	}
	if(s.no2>s.no1)
	{
		cout<<"smallest number is"<<s.no1;
	}
	
}
int main()
{
	int no1;
	int no2;
    cout<<"Enter the first number"<<endl;
	cin>>no1;
	cout<<"Enter the second number"<<endl;
	cin>>no2;
	Small s;
	
	s.setvalue(no1,no2);
	findsmall(s);
	
 } 

