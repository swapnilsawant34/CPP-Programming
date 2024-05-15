#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class question
{

	int qid;
       char que[30],op1[30],op3[30],op4[30],op2[30],rans[30];
       public:
void setque(int count)
	 {
	    qid=count;
	    cout<<"enter the question"<<endl;
	    gets(que);
	    cout<<"enter 1st option\n" ;
	    gets(op1);
	    cout<<"enter 2nd option\n";
	    gets(op2);
	    cout<<"enter 3rd option\n";
	    gets(op3);
	    cout<<"enter 4th option\n";
	    gets(op4);
	    cout<<"enter the reserved ans of question\n";
	    gets(rans);

	 }
    int getqid()
	{
	  return qid;
	}
   char* getque()
	{
	 return que;

	}
   char* getop1()
	{
	 return op1;

	}
   char* getop2()
	{
	 return op2;

	}
   char* getop3()
	{
	 return op3;

	}
   char* getop4()
	{
	 return op4;

	}

    char* getrans()
      {
       return rans;  // reserved ans.

      }

      };
int main()
{
	 
	 question *Q;
	 int size,i;
	 cout<<" how much question  you want to add in your exam\n" ;
	 cin>>size;
	 Q=(question*)malloc(size*sizeof(question));
       int count=1;
	 for( i=0;i<size;i++)
	    {
	      Q[i].setque(count);
	      count ++;
	    }
	  for(i=0;i<size;i++)
	     {
	       char *que=Q[i].getque();
	       int id=Q[i].getqid();
	       cout<<id<<"."<<que<<"\n";
	       char* op1=Q[i].getop1();
	       cout<<op1<<"\n";
	       char* op2=Q[i].getop2();
	       cout<<op2<<"\n";
		char* op3=Q[i].getop3();
	       cout<<op3<<"\n";
		char* op4=Q[i].getop4();
	       cout<<op4<<"\n";
	       char *rans=Q[i].getrans();
	       cout<<"enter your ans\n";
	       char yans[30];
	       gets(yans);
	    if(strcmp(yans,rans)==0)
		{
		  cout<<"your ans is right\n";

		}
		else
		{
		  cout<<"your ans is wrong\n";
		}
	     }

	

       }
