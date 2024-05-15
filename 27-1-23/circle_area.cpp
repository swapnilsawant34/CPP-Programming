#include<iostream>
using namespace std;
//circle area using friend function.
class Area
{
	private:
		float rad;
		
	public:
		void getfloat(float rad);
		void friend calarea(Area c);  //inside friend function (classname objectname) //declration
	
};

void Area::getfloat(float rad)
{
	this->rad=rad;
}
void calarea(Area c) //
{
	cout<<"Area of circle is "<<3.14*c.rad*c.rad;
}

int main()
{
	float rad;
	cout<<"Enter the radius:"<<endl;
	cin>>rad;
	
	Area c;
	c.getfloat(rad); //passing parameter
	calarea(c); //passing object name 
}
