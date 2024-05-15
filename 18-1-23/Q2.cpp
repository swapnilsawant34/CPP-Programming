#include<iostream>
#include<string.h>
using namespace std;

class StudInfo
{
	protected:
	char name[90];
	int id;
	public:
	void getBasicInfo(int id,char name[])
	{
		this->id=id;
		strcpy(this->name,name);
		
	}
	
	void showDetails()
	{
		cout<<name<<"\t"<<id;
		
	}
	
};

class StudResultInfo:public StudInfo 
{
	protected:
	float total_marks,per,marks;
	public:
		void getResult(float total_marks,float per,float marks)
		{
			cout<<"Enter the total marks"<<endl;
			cin>>total_marks;
			
			cout<<"Enter the marks earned out of total marks"<<endl;
			cin>>marks;
			
				per=(marks/total_marks)*100;
				
				cout<<name<<"\t"<<id<<"\t"<<per;
			
		}	
};

int main()
{
	int id;
	char name[90];
	
		cout<<"Enter students basic information"<<endl;
		cin>>name>>id;
	
	
	
	StudResultInfo obj;
	obj.getBasicInfo(name,id);
	obj.getResult();
	obj.showDetails();
	obj.putResult();
	obj.showPercentage();
	//cout<<"Final result is "<<obj.showPercentage();
}
