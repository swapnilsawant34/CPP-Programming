#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Question
{
    private:
        int qid;
        char question[150];
        char op1[100];
        char op2[100];
        char op3[100];
        char op4[100];
        char ans[100];
    
    public:
    void setQue(char q[])
    {
        strcpy(question,q);
    }
    char *getQue()
    {
        return question;
    }
        void setQuestion(int id,char o1[],char o2[],char o3[],char o4[]){
            qid=id;

            strcpy(op1,o1);
            strcpy(op2,o2);
            strcpy(op3,o3);
            strcpy(op4,o4);
        }
        void showQuestion(){
            cout<<qid<<" "<<question<<"\n";
            cout<<op1<<"\n";
            cout<<op2<<"\n";
            cout<<op3<<"\n";
            cout<<op4<<"\n";
        }
        void setAns(char a[])
        {
            strcpy(ans,a);
        }
        char *getAns()
        {
            return ans;
        }
        
        
};

int main()
{
    Question *q;
    int size,i,qno=0,choice,id,flag=0;
    char qu[100],o1[50],o2[50],o3[50],o4[50],ans[100],a[200];
    while(1){
    cout<<"\nChoose follwing option\n";
    cout<<"1. Enter the questions\n";
    cout<<"2. Display all Question\n";
    cout<<"3. Give the test\n";
    cout<<"4. Exit\n\n";
    cout<<"Enter the choice\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter the Que Size"<<"\n";
        cin>>size;
            q=(Question *)malloc(sizeof(Question)*size);
            
                cout<<"Enter The Id "<<"\n";
                cin>>id;
                cout<<"Enter the Question"<<"\n";
                cin>>qu;
                cout<<"Enter The Four Option"<<"\n";
                cin>>o1>>o2>>o3>>o4;
                q[0].setQue(qu);
                q[0].setQuestion(id,o1,o2,o3,o4);
                cout<<"Enter the Answer"<<"\n";
                cin>>ans;
                q[0].setAns(ans);
               
            for(i=1;i<size;i++)
            {
               flag=1;
                for(int j=0;j<i;j++)
                {
                    cout<<"Enter the Question"<<"\n";
                    cin>>qu;
                  int  comp=strcmp(q[j].getQue(),qu);
                  
                  
                  
                  
                  
                    if(comp==0)
                    {
                            flag=0;
                            i--;
                            cout<<"Not Allowed";
                            break;
                    }
                }
            if(flag)
            {
                cout<<"Enter The Id "<<"\n";
                cin>>id;
                
                cout<<"Enter The Four Option"<<"\n";
                cin>>o1>>o2>>o3>>o4;
                q[i].setQue(qu);
                q[i].setQuestion(id,o1,o2,o3,o4);
                cout<<"Enter the Answer"<<"\n";
                cin>>ans;
                q[i].setAns(ans);
               
             }
            
        }

            
        break;
        case 2:
            
            for(i=0;i<size;i++)
            {
                q[i].showQuestion();
            }
        break;
        case 3:
        for(i=0;i<size;i++)
        {
            q[i].showQuestion();
            cout<<"Enter The Answer"<<"\n";
            cin>>a;
            int comp = strcmp(q[i].getAns(),a);
            if(comp==0)
            {
                cout<<"Hi"<<"\n";
            }
            else{
                cout<<"Error"<<"\n";
            }
        }
             
        break;
        case 4:
            exit(0);
        default:
            cout<<"Wrong choice!!";
    }
    }
}
