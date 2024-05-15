#include<iostream>
using namespace std;
//unary operator
class Increment
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
			
			void operator ++()
			{
				++a;
				++b;
				++c;
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
	Increment i;
	i.setValue(10,20,30);
	cout<<"Before overload"<<endl;
	i.display();
	
	++i;
	cout<<"After overload"<<endl;
	i.display();
	
}

