#include<iostream>
#include<string.h>
using namespace std;

class Programming
{
	private:
		char name[90];
		char ch[90];
		public:
	Programming(char name[],char ch[])
	{
		strcpy(this->name,name);
		strcpy(this->ch,ch);
			
		}
		
		
		char displayString()
		{
			int i,count=0;
		for(i=0;i<=name[i];i++)
		{
			for(int j=0;j<=ch[j];j++)

			{
			
			if(name[i]==' ')
			{
				count++;
			}
			if(count==2)
			{
				//name[i+1]=ch[j];
				ch[j]=name[i];
			}
			
		
	       }
	       cout<<"String is "<<ch;
		}
	}
	

	
};

int main()
{
	char name[90];
	char ch[90];
	cout<<"Enter the string:"<<endl;
	gets(name);
	
	cout<<"Enter the string pass throuth the object"<<endl;
	gets(ch);
	
	Programming p(name,ch);

}
