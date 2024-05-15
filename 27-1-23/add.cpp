#include<iostream>
using namespace std;
class B;
class A
{
	public:
		A(): x(45){
		}
	private:
		int x;
	 friend int add(A,B);	//Friend function for class A
		
};

class B
{
	public:
	B(): y(20){ //constructor
	}
	private:
		int y;
	 friend int add(A,B);
};

int add(A a,B b)
{
	return(a.x+b.y); //return addition
}

int main()
{
	A a; //Class A object
	B b; //Class B object
	
	cout<<"Addition is "<<add(a,b);
	
}
