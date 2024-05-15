#include<iostream>
using namespace std;

class Factorial
{
	private:
		int no;
	public:
	void setvalue(int no);
	void friend findfact(Factorial fact);	
	
	
};

void Factorial::setvalue(int no){
	this->no=no;
}

void  findfact(Factorial fact)
{
	int i,f=1;
	for(i=1;i<=fact.no;i++)
	{
		f=f*i;
	}
	cout<<"Factorial is "<<f;
	
}

int main()
{
	Factorial fact;
	fact.setvalue(5);
	findfact(fact);
	
	
}
