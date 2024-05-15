#include<iostream>
using namespace std;
class Student
{
	private:
	int roll[5];
	char name[90];
	int total[5];
	int i;
	public:
	void acceptInfo()
	{
		
		cout<<"Enter the student Information"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>name[i]>>roll[i]>>total[i];
		}
		cout<<"Display the student Information"<<endl;
		for(i=0;i<5;i++)
		{
		 	cout<<name[i]<<"\t"<<roll[i]<<"\t"<<total[i]<<endl;	
		}
		
	
	}
	
	void findTopper()
	{
		int max;
		for(i=0;i<5;i++)
		{
			if(total[i]>max)
			{
				max=total[i];
			}
		}
		cout<<"Topper is"<<endl;
		for(i=0;i<5;i++)
		{
			if(max==total[i])
			{
			   	cout<<name[i]<<"\t"<<roll[i]<<"\t"<<total[i]<<endl;		
			}
		}
			
	}
	
};

int main()
{
	Student s;
	
	s.acceptInfo();
	s.findTopper();	
}
