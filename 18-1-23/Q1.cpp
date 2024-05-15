#include<iostream>
using namespace std;

//single level inhetitance.

class A  //parent class
{
	protected:
		int a;
		public:
		void show(int a)
		{
			this->a=a;
			
		}
	
};

class B:public A   //child class
{
	public:
	int display()
	{
		return a;
	}
	
};

int main()
{
	B obj;  //child object creation
	obj.show(20);
	
	cout<<"Display value is "<<obj.display();
	
}
