#include<iostream>
using namespace std;

class addmember1
{
	private:

		int x;
		public:
		void setvalue(int x);
		void friend findadd(addmember1 a);
};
class addmember2
{
	private:
		int y;
		public:
	void setvalue(int y);
	void friend findadd(addmember2 b);
	
};
void addmember1::setvalue(int x)
{
	this->x=x;
	
}

void addmember2::setvalue(int y)
{
	this->y=y;
}
int findadd(addmember1 a,addmember2 b)
{
	int add;
	add=x+y;
	
	cout<<"Addition is "<<add;
	
}


int main()
{
	addmember1 a;
	a.setvalue(10);
	
	addmember2 b;
	b.setvalue(20);
	findadd(a,b);
}
