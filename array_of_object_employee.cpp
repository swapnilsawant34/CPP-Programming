#include<iostream>
#include<string.h>
using namespace std;

class EmpApp
{
	private:
	int id,sal;
	char name[90];
	
	public:
		void setData(char name[],int id,int sal)
		{
			strcpy(this->name,name);
			this->id=id;
			this->sal=sal;
		}
		
		void display()
		{
			cout<<name<<"\t"<<id<<"\t"<<sal<<endl;
		}
		
		getSal()
		{
			return sal;
		}
};

int main()
{
	EmpApp e[5];
	int id,sal,i,j;
	char name[90];
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter the name,id and salary of employee"<<endl;
		cin>>name>>id>>sal;
		
		e[i].setData(name,id,sal);
	}
	cout<<"Display the employee details"<<endl;
	for(i=0;i<5;i++)
	{
		e[i].display();
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			int ssal=e[i].getSal();
			int nsal=e[j].getSal();
			if(ssal>nsal)
			{
				EmpApp temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	cout<<"Sorting"<<endl;
	for(i=0;i<5;i++)
	{
		e[i].display();
	}
	
	
}
