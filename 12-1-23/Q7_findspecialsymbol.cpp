#include<iostream>
#include<string.h>
#include<string.h>
using namespace std;

class FindSpecialInString
{
	private:
	char ch[500];
	public:
	void acceptString(char name[])
	{
		//ch=name;
		strcpy(ch,name);
	}
	int getSpecialCharCount()
	{
		int i,count=0;
		for(i=0;ch[i]!='\0';i++){
		
		if(ch[i]>=48 && ch[i]<=57 || ch[i]>=65 && ch[i]<=90 || ch[i]>=97 && ch[i]<=122)
		{
			continue;
		}
		else if(ch[i]==32)
		{
			continue;
		}
		
		else
		{
			
				count++;
		}
		//return count;
		
		}
		cout<<"Count of special symbol is "<<count;
	}
	
};

int main()
{
	char name[100];
	cout<<"Enter the string\n";
	gets(name);
	
	
	FindSpecialInString c;
	c.acceptString(name);
	
	c.getSpecialCharCount();
	
	//cout<<"Count of special symbol is "<<result;
}
