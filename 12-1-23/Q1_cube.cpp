#include<iostream>
using namespace std;

//Q1. finding cube
class FindCube
{
	private:
	int no;
	public:
	void setValue(int val)
	{
		no=val;
		
	}
	int getCube()
	{
		return no*no*no;
	}
};

int main()
{
	int val;
	cout<<"Enter the number"<<endl;
	cin>>val;
	
	FindCube c;
	
	c.setValue(val);
	
	int result=c.getCube();
	
	cout<<"Cube is "<<result;
	
}
