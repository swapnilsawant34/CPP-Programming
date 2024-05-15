#include<iostream>
using namespace std;
class Student
{
	private:
		int roll;
		char name[90];
		int marks;
		
		public:
			
			void acceptInfo()
			{
				cout<<"Enter the Student name,roll no,marks"<<endl;
				cin>>name>>roll>>marks;
			}
			
			void displaymarks()
			{
				cout<<name<<"\t"<<roll<<"\t"<<marks<<"\t";
			}
			
			int getmark()
			{
				return marks;
			}
};

int main()
{
	Student s1,s2;
	s1.acceptInfo();
	s2.acceptInfo();
	s1.displaymarks();
	s2.displaymarks();
	
	//s1.getmark()>s2.getmark() ? s1.displaymarks() : s2.displaymarks();
	
	s1.getmark()>s2.getmark() ? cout<<"Student S1 is topper " : cout<<"Student S2 is topper ";
}
