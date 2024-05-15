#include<iostream>
#include<string.h>
using namespace std;

class Salary
{
	private:
		char name[90];
		int id,presentDays,perDaySalary;
		int salary;
		public:
	Salary(char name[],int id,int presentDays,int perDaySalary)
	{
		strcpy(this->name,name);
		this->id=id;
		this->perDaySalary=perDaySalary;
		this->presentDays=presentDays;
		
			//salary=perDaySalary*presentDays;
		//cout<<"Total salary is "<<salary;
	}
	int calculateSalary()
	{	
		salary=perDaySalary*presentDays;
		return salary;
		//cout<<"Total salary is "<<salary;
	}
	void show()
	{
		//cout<<"Employee Detailes with salary:"<<name<<id<<presentDays<<perDaySalary<<salary;
		cout<<"Emp_Name= "<<name<<"\n"<<"Emp_id= "<<id<<"\n"<<"Emp_presentdays= "<<presentDays;	
	}
		
};

int main()
{
	int id,presentDays,perDaySalary;
	char name[90];
	
	cout<<"Enter the Employee Detailes"<<endl;
	cin>>name>>id>>presentDays>>perDaySalary;
	
	Salary sal(name,id,presentDays,perDaySalary);
	sal.show();
	int result=sal.calculateSalary();
	cout<<"\nSalary is "<<result;
	
	
	//sal.show();
	
	
	
	
}
