#include<iostream>
#include<string.h>
using namespace std;
class EncryptString
{
	private:
		char name[90];
		public:
			
			void acceptString(char ch[])    ///abcdabcdabcde
			{
				strcpy(name,ch);
				
			}
			void encrypt()
			{
				int count=1;
				int i,j;
				for(i=0;name[i]!='\0';i++)
				{
					for(j=i+1;name[j]!='\0';j++)
					{
					
					if(name[i]>name[j])
					{
						char temp=name[i];
						     name[i]=name[j];       //sort the string 
						     name[j]=temp;
					}
				}
				}
				cout<<name[i];
				
				for(i=0;name[i]!='\0';i++)
				{
					if(name[i]==name[i+1])
					{
						count++;            //same elements count++
						
						name[i]=name[i+1];  // print the singgle character and the count as well in the perticular chararacter in the string/ 
					}
					else
					{
						cout<<name[i]<<count;  //a3b3c3d3e1
						count=1;
					}
				}
				
				
			}				
};

int main()
{
	char ch[100];
	cout<<"Enter the string"<<endl;   //input-->abcdabcdabcde
	gets(ch);
	
	EncryptString e;
	
	e.acceptString(ch);
	e.encrypt();
}


