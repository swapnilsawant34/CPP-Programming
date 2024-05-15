#include<iostream>
using namespace std;

class Rectangle
{
	private:
	int length,bredth;
	public:
	Rectangle()    //without parameter
	{
		length=0;
		bredth=0;


		
	}
	int getArea1()
	{
		return length*bredth;
	}
	
	Rectangle(int length,int breath)   // with two parameter
	{
		this->length=length;
		this->bredth=breath;
	
	}
	
	int getArea2()
	{
		return length*bredth;
	}
	
    Rectangle(Rectangle &a)
    {
    	this->length=a.length;
		this->bredth=a.bredth;
    
     	
	}
	 
	 int getArea3()
	{
		return length*bredth;
		
	}
	
	
};

int  main()
{
	int length,bredth;
	

	
	Rectangle r1;
	
	int result1=r1.getArea1();
	cout<<"Area of rectangle without parameter is "<<result1;
	
	
	cout<<"\nEnter the length and breadth"<<endl;
    cin>>length>>bredth;
    
    Rectangle r2(length,bredth);
    int result2=r2.getArea2();
     cout<<"\nArea of rectangle with parameter is "<<result2;
    
    Rectangle r3(r2);
	int result3=r3.getArea3();
	cout<<"\nArea of rectangle having l & b is "<<result3;
}

