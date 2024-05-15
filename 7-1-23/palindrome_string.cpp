#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class StringPalindrome
{
	private:
	char name[90];
	
	public:
	int acceptString(char ch[])
	{
		strcpy(name,ch);
	}
	
	int checkPalindrome()
	{
		char sname[90];  //
		int flag=0;
		
		for(int j=0;name[j]!='\0';j++)
		{
			sname[j]=name[j];
		}
		int len=strlen(name);
		
		for(int i=0;i<len/2;i++)
		{
			int temp = name[i];
			 name[i]=name[len-i-1];
			 name[len-i-1]=temp;
		}
		//cout<<name<<endl;
		
		for(int i=0;name[i]!='\0';i++)
		{
			if(name[i]!=sname[i])
			{
				flag=1;
				break;
			}
		}
		if(flag)
		{
			return -1;
			
		}
		else
		{
			return 1;
		}
	}
};

int main()
{
	char ch[90];
	int result;
	cout<<"Enter the string"<<endl;
	gets(ch);
	
	StringPalindrome p;
	
	p.acceptString(ch);
	result=p.checkPalindrome();
	
	cout<<"result is "<<result<<endl;
}
