#include<iostream>
using namespace std;

class Unary
{
	private:
		int a,b,c;
		public:
			
			void setValue(int a,int b,int c)
			{
				this->a=a;
				this->b=b;
				this->c=c;
				
			}
			
			void operator -()
			{
				a=-a;
				b=-b;
				c=-c;
			}
			
			
			void display()
			{
				cout<<a<<endl;
				cout<<b<<endl;
				cout<<c<<endl;
				
			}
	
	
};

int main()
{
	int a,b,c;
	Unary u;
	u.setValue(10,20,30);
	cout<<"Before overload"<<endl;
	u.display();
	
	-u;
	cout<<"After overload"<<endl;
	u.display();
}
