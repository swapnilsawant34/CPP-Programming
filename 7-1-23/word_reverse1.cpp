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
	int k;
		for(int i=0,j=0;i<len;i++)
		{
			if(i<len-1){
				 k=i-1;
			}
			else{
				 k=i;
			}
			while( k>j){
				char temp= name[j];
				name[j]=name[k];
				name[k]=temp;
				j++;
				k--;
				
			}
		j=i+1;
		
			
	        
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
