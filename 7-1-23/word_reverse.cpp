#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
class ReverseWord
{
	private:
	char name[90];
	
	public:
	void acceptString(char ch[])
	{
		strcpy(name,ch);
		
	}
	
	char *reverseWord()
	{
		int len=strlen(name);
		int mid=(len/2);
		int end=(len-1);
	
		for(int i=0;i<mid;i++,end--)
		{
			
			
			char temp=name[i];
			name[i]=name[end];
			name[end]=temp;
			
	        
	}
		
		return name;
	
	}

};

int main()
{
	char ch[90];
	char *result;
	
	cout<<"Enter the string"<<endl;
	gets(ch);
	
	ReverseWord rw;
	rw.acceptString(ch);
	result=rw.reverseWord();
	
	cout<<"Reverse string is "<<result;
}
