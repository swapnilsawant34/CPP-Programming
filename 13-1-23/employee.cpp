#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Employee
{
	private:
		char ch[90];
		int id1,basicSal1,progress,total_sal;
		public:
	void setPersonalInfo(char name[],int id,int basicSal)
	{
		strcpy(ch,name);
		id1=id;
		basicSal1=basicSal;
		//progress=p;
	
	}
	int setProgress(int p)
	{
			progress=p;
		
	}
	int CallIncrement()
	{
		cout<<"Emplyoee detailes with updated salary"<<endl;
	     if(progress>30 && progress<50)
	     {
	     	
	     	total_sal=(basicSal1*20)/100;
	     	 basicSal1=total_sal+basicSal1;
	     	 
	     	 //cout<<"Emplyoee detailes with updated salary"<<endl;
	     	 cout<<ch<<"\t"<<id1<<"\t"<<basicSal1<<endl;   //This not basic salary it is total salary i.e updated salary
	     	
		 }
		 	
		 if(progress>=50)
	     {
	     	total_sal=(basicSal1*30)/100;
	     	 basicSal1=total_sal+basicSal1;
	     	 
	     	 
	     	 cout<<ch<<"\t"<<id1<<"\t"<<basicSal1<<endl;
		 }
		 if(progress<=30)
		 {
		 
		 	cout<<ch<<"\t"<<id1<<"\t"<<basicSal1<<endl;
		 }
	}
	//void show()
	//{
	//	cout<<basicSal1<<ch<<endl;
		
	//}
};

int main()
{
	char name[90];
	int i,id,basicSal,p;
	
	Employee emp[3];
	for(i=0;i<3;i++)
	{
		cout<<"Enter the employee detailes"<<endl;
		cin>>name>>id>>basicSal;
		emp[i].setPersonalInfo(name,id,basicSal);
	}
	for(i=0;i<3;i++)
	{
		cout<<"Enter the progress"<<endl;
		cin>>p;
		emp[i].setProgress(p);
	}
	
	
	for(i=0;i<3;i++)
	{
		emp[i].CallIncrement();
	}
	
	
}


