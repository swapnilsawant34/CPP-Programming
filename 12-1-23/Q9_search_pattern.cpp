#include<iostream>
#include<string.h>
using namespace std;

class FindStringPattern
{
	private:
	char *ch;
	char *spat;
	public:
	char acceptString(char name[],char pat[])
	{
		strcpy(ch,name);
		strcpy(spat,pat);
	}
	
	int searchPattern()
	{
		int m=strlen(ch);
		int n=strlen(spat);
		int i,j;
		for(i=0;i<=m-n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(ch[i+j]!=spat[j]){
				
				   break;
		}
	}
			if(j==n)
			{
				cout<<"Pattren found at index "<<i;
			}
			else
			{
				cout<<"Pattrn not found";
			}
				   
		}
			
		
		
		
		
		
		
	}
	
	
};

int main()
{
	char name[90];
	char pat[90];
	cout<<"Enter the string"<<endl;
	gets(name);
	
	cout<<"Enter the Pattern"<<endl;
	gets(pat);
	
	FindStringPattern p;
	p.acceptString(name,pat);
	p.searchPattern();
}
