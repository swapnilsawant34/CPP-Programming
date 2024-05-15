#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		int id;char name[90];int sal;
		public:
			void setData()
			{
				cout<<"Enter the id name sal"<<endl;
				cin>>name>>id>>sal;
			}
			void showData()
			{
				cout<<name<<"\t"<<id<<"\t"<<sal<<endl;
			}
			
			int operator ==(Employee emp)
			{
				if(this->id==emp.id && strcmp(this->name,emp.name)==0 && this->sal==emp.sal)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				
				
			} 
	
};
int main()
{
	Employee emp[5];
	for(int i=0;i<5;i++)
	{
		emp[i].setData();
	}
	cout<<"Display all the records"<<endl;
	for(int i=0;i<5;i++)
	{
		emp[i].showData();
	}
	Employee e;
	e.setData();
	int flag=0;
	for(int i=0;i<5;i++)
	{
	    if(emp[i]==e)
	    {
	    	flag=1;
	    	break;
		}
	
	}
		if(flag)
		{
			cout<<"Found"<<endl;
			
		}
		else
		{
			cout<<"Not found"<<endl;
		}
}
