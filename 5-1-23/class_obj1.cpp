#include<iostream>
using namespace std;
class Student
{
	private:
	int roll,total_marks,i;
	int mark=100;
	char name[90];
	
	public:
	void acceptInfo()
	{
		for(i=0;i<5;i++)
		{
			cout<<"Enter the student name,roll,total marks "<<endl;
			cin>>name>>roll>>total_marks;
		}
	}
	
	void findTopper()
	{
		cout<<"Enter the student name";
		cin>>name;
		
		
		if(mark<=total_marks)
		{
			cout<<" is topper";
			cin>>name;
		}
		else
		{
			cout<<"  is not topper";
			cin>>name;
		}
		
	}
};

int main()
{
	Student s;
	s.acceptInfo();
	s.findTopper();
}
