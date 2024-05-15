#include<iostream>
using namespace std;

class Table
{
	public:
	int no,i=1;
	
	public:
	void setNumber()
	{
		cout<<"Enter the number ";
		cin>>no;
	}
	
	void printTable()
	{
		
		while(i<=10)
		{
			
			cout<<"Table= "<<no*i<<"\n";
			
			i++;
		}
		
	}
};
int main()
{
	Table t;
	t.setNumber();
	t.printTable();
}
