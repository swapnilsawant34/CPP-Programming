#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class StringOperation
{
	protected:
		int i,j;
		char name[90];
		public:
			void getString(char name[])
			{
				strcpy(this->name,name);
				
			}
	
	
};

class ConvertToUpper:public StringOperation
{
	protected:
		public:
		void getupper()
		{
			for(i=0;name[i]!='\0';i++)
			{
				if(name[i]>='a' && name[i]<='z'){
				
				name[i]=name[i]-32;
			    }
			}
			cout<<"Conversion of upper string is "<<name;
		}
		
		//cout<<"Conversion of upper string is "<<name;


	
};


class MaxRepetativeChar:public StringOperation
{
	
		int count=1,maxcount=0;
		char maxchar;
		public:
		char maxrepetative()
		{
		
			for(i=0;name[i]!='\0';i++)
			{
				for(j=i+1;name[j]!='\0';j++)
				{
					if(name[i]>name[j])
					{
						char temp=name[i];
						     name[i]=name[j];
						     name[j]=temp;
					}
				}
				for(i=0;name[i]!='\0';i++){
				
					if(name[i]==name[i+1])
					{
						count++;
					}
					else if(maxcount<count){
						maxcount=count;
						maxchar=name[i];
						count=1;
					}
					
	
		}
		cout<<maxchar<<maxcount;		
}
}
};
 
 class WordReverse:public StringOperation      //I am Indian--->Indian am I
 {
 	protected:
 		int temp;
 		public:
 			void reverse()
			{
				int start,end;
				int j=0;
				
				int len=strlen(name);
				
				for(i=0;i<(len/2);i++)
				{
					 temp=name[i];
					     name[i]=name[len-i-1];
					     name[len-i-1]=temp;
					
			  }
				for(i=0;i<len;i++)
				{
				if(name[i]==' ' || name[i]=='\0')
				{
						
				for(start=j,end=i-1;start<(i+j)/2;start++,end--)
				{
					 temp=name[start];
					     name[start]=name[end];
					     name[end]=temp;
			    }
				j=i+1;
				
			}
		
		
			}
				cout<<endl;
				cout<<"Reverse Sentnce is: "<<endl;
			cout<<name<<" ";
		
			
		}
 };
 
 int main()
 {
 	char name[50];
 	
 	cout<<"Enter the string:"<<endl;
 	gets(name);
 	
 	ConvertToUpper obj1;
 	obj1.getString(name);
 	obj1.getupper();
 	
 	
 	MaxRepetativeChar obj2;
 	obj2.getString(name);
 	obj2.maxrepetative();
 	
 	WordReverse obj3;
 	obj3.getString(name);
 	obj3.reverse();
 	
 }
