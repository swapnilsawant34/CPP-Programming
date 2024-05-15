#include<iostream>
using namespace std;

//WAP to create the function name as area.(using function overloading).

float area(float radius)
{
	return (3.14f*radius*radius);
	
}

int area(int len,int width)
{
	return (len*width);
	
}

int main()
{
	
	float result,result1;
	
	result=area(2);
	
	result1=area(2,2);
	
	cout<<"Area of circle= "<<result;
	
	cout<<"\nArea of reactangle= "<<result1;
	
	return 0;

	
}
