#include<iostream>
#include<stdlib.h>
using namespace std;

class Question
{
	private:
		int qid;
	char  que[100];
	char op1[100];
	char op2[100];
	char op3[100];
	char op4[100];
	char ans[100];
	
	public:
	void questionData()
	{
		cout<<"Enter Question id,Questions,options and answers "<<endl;
		cin>>qid>>que>>op1>>op2>>op3>>op4>>ans;
	}
	
	void showAnswer()
	{
		cout<<"Ans is "<<"\t"<<qid<<"\t"<<que<<"\t"<<op1<<endl<<op2<<endl<<op3<<endl<<op4<<"\t"<<ans;
	}
	
};
	
int main()
{
	int size,i,choice;
	
	//int qid;
	//char que[100],op1[100],op2[100],op3[100],op4[100];
	//char ans[100];
	Question *q;
	cout<<"Enter the question count"<<endl;
	cin>>size;
	cout<<"Enter the choice"<<endl;
	cin>>choice;
 do{
 	
	switch(choice){
	
	
case 1:
	q=(Question*)malloc(sizeof(Question)*size);
	for(i=0;i<size;i++)
	{
		q[i].questionData();
		
	}
	

	
	break;
	
	case 2:
	cout<<"Display the data"<<endl;
	for(i=0;i<size;i++)
	{
		q[i].showAnswer();
	}
		
	break;

	
	
		
	
	
}
}while();

}		
