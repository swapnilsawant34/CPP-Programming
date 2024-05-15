#include<iostream>
#include<string.h>
using namespace std;
//constructor overloading
class ArrayOperation
{
	private:
		int *arr,len;
		char ch[90];
		public:
			ArrayOperation(int a[])
			{
				arr=a;
			}
			void revIntArray()
			{
				int i;
				for(i=0;i<5/2;i++)
				{
			      int temp=arr[i];
		          arr[i]=arr[5-i-1];
		          arr[5-i-1]=temp;
				}
				
			}
			void displayIntArray()
			{
				int i;
				for(i=0;i<5;i++)
				{
					cout<<arr[i]<<"\t";
				}
			}
			
			
			ArrayOperation(char ch[],int len)
			{
				strcpy(this->ch,ch);
				this->len=len;
			}			
				
		
			void revCharArray()
			{
				//len=strlen(ch);
		    int mid=(len/2);
		    int end=(len-1);
	
		for(int i=0;i<mid;i++,end--)
		{
			char temp=ch[i];
			ch[i]=ch[end];
			ch[end]=temp;		
		}
		}
		void displayCharArray()
		{
			cout<<ch<<"\t";
		}
		
			
			void intArrayOccurance()
			{
				int count=0,x[5],v=-1;
				for(int i=0;i<5;i++)
				{
					
					for(int j=(i+1);j<5;j++)
					{
						if(arr[i]>arr[j])
						{
							int temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
							
						}
					}
				}
				cout<<"ocuurance..............."<<endl;
				for(int i=0;i<5;i++)
				{
					
					for(int j=0;j<5;j++)
				{
				if(arr[i]==arr[j])
				{
					
					count++;
					
					x[j]=v;
				}
				}
					if(x[i]!=v)
					{
						x[i]=count;
						
					}
					else
					{
						cout<<endl<<arr[i]<<" ......."<<x[i]<<"\t";
					}
				
			   }
					
				
				}
				
			
			
			void charOccurance()
			{
				for(int i=0;ch[i]!='\0';i++)
				{
					for(int j=(i+1);ch[j]!='\0';j++)
					{
						if(ch[i]>ch[j])
						{
							char temp=ch[i];
							ch[i]=ch[j];
							ch[j]=temp;
						}
					}
				}
				int count=1;
					for(int i=0;ch[i]!='\0';i++)
					{
						if(ch[i]==ch[i+1])
						{
							count++;
						}
						else
						{
							cout<<ch[i]<<"......"<<count;
							count=1;
						}
					}
			}
};

int main()
{
	int a[5];
	char ch[90];
	int len,i;
	cout<<"\nEnter the string"<<endl;
	gets(ch);
	len=strlen(ch);
	
	cout<<"Enter the array element"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
		
	ArrayOperation obj1(a);
	cout<<"\nDisplay before reverse array"<<endl;
	obj1.displayIntArray();
	obj1.revIntArray();
	
	cout<<"\nDisplay reverse array"<<endl;
	obj1.displayIntArray();
	
	
	
	ArrayOperation obj2(ch,len);
	cout<<"\nDisplay before string array"<<endl;
	obj2.displayCharArray();
	obj2.revCharArray();
	
	cout<<"\nDisplay string array"<<endl;
	obj2.displayCharArray();
	
	obj1.intArrayOccurance();
//	obj1.showOccurance();
    obj2.charOccurance();
}

