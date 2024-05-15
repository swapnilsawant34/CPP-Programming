#include<iostream>
using namespace std;

class CircleArea
{
	private:
		float r;
		public:
	void setRadius(float radius)
	{
		r=radius;
		
	}
	float getArea()
	{
		return (3.14f*r*r);
		
	}
};

int main()
{
	float radius;
	
	cout<<"Enter the radius of circle"<<endl;
	cin>>radius;
	
	CircleArea ca;
	ca.setRadius(radius);
	
	float result=ca.getArea();
	
	cout<<"Area of Circle "<<result; 
}
