#include<iostream>
#include<string.h>
using namespace std;


class Employee
{
	private:
	int id[3];
	char emp_name[90];
	char emp_dept[90];
	char hr_dept[90];
	int i;
	
	public:
	void acceptInfo()
	{
		cout<<"Enter the Employee Information"<<endl;
		for(i=0;i<3;i++)
		{
			cin>>id[i]>>emp_name[i]>>emp_dept[i];
		}
		
		cout<<"Display the Employee Information"<<endl;
		for(i=0;i<3;i++)
		{
			cout<<id[i]<<"\t"<<emp_name[i]<<"\t"<<emp_dept<<endl;
		}
		
	}
	
	void showDept()
	{
		for(i=0;i<3;i++){
		
		if(strcmp(emp_dept,hr_dept)==0)
		{
			emp_dept[i]=hr_dept[i];
			
		}
	}
	cout<<"Employee who works in HR department is"<<endl;
	for(i=0;i<3;i++)
	{
		if(emp_dept[i]==hr_dept[i])
		{
			cout<<id[i]<<"\t"<<emp_name[i]<<"\t"<<emp_dept<<endl;
			
		}
		
	}
		
	}
};
int main()
{
	Employee e;
	e.acceptInfo();
	e.showDept();
}
