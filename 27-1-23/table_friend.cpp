#include<iostream>
using namespace std;
//table using friend function.
class Table
{
	private:
		int no;
	public:
	void setvalue(int no);
	void friend table(Table t);	
	
};

void Table::setvalue(int no)
{
	this->no=no;
}

void table(Table t)
{
	int i=1;
	cout<<"Table is "<<endl;
	while(i<=10)
	{
		int table=t.no*i;
		cout<<"\n"<<table;
		i++;
	}
	
	
}

int main()
{
	int no;
	cout<<"Enter the number"<<endl;
	cin>>no;
	
	Table t;
	t.setvalue(no);
	
	table(t);
	
} 
