#include<iostream>
#include<string.h>
using namespace std;

class Programming{
	private:
	char name[90];
	char ch[90];
	public:
	Programming(char name[],char ch[])
	{
		strcpy(this->name,ch);
		
	}
	
	
};

int main()
{
	char name[90]="I love programming language";
	char ch[90];
	//cout<<"Enter the string:"<<endl;
	//gets(name);
	
	//cout<<"Enter the string pass throuth the object"<<endl;
	//gets(ch);
	
	//Programming p(name,ch);
	Programming *p=new Programming(name,ch);
	p->ch("java");
	
	cout<<"I love" + p->ch;
	cout<<s->name;

}
