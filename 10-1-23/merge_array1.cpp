#include<iostream>
using namespace std;

class MergeArray
{
	private:
	int *f,*s,s1,s2;	
	
	public:
		void accept(int first[],int second[],int size1,int size2)
		{
			f=first;
			s=second;
			s1=size1;
			s2=size2;
		}
		
		int showAfterMerge()
		{
			int i;
			
			for(i=(s2-1);i>=0;i--)
			{
				int j;
				int last=f[s1-1];
				
				for(j=(s1-2);j>=0 && f[j]>s[i];j--)
				{
					f[j+1]=f[j];
					
					if(last>s[i])
					{
						f[j+1]=s[i];
						s[i]=last;
					}
				}
			}
		
			cout<<"After the merging -->Display the first matrix:"<<endl;
			for(i=0;i<s1;i++)
			{
				cout<<f[i]<<"\t";
			}
			
			cout<<"\nDisplay the Second matrix:"<<endl;
			for(i=0;i<s2;i++)
			{
				cout<<s[i]<<"\t";
			}
			
			
			
		}
};

int main()
{
	int first[6],second[4],third[10];
	int i;
	
	//int size1=sizeof(first)/sizeof(first[0]);
	//int size2=sizeof(second)/sizeof(second[0]);
	
	int size1,size2;
	cout<<"Enter the first array size"<<endl;
	cin>>size1;
	cout<<"Enter the first array elements"<<endl;
	for(i=0;i<size1;i++)
	{
		cin>>first[i];
	}
	cout<<"Enter the second array size"<<endl;
	cin>>size2;
	cout<<"Enter the second array elements"<<endl;
	 for(i=0;i<size2;i++)
	{
		cin>>second[i];
	 	
	} 
	
	
	
	MergeArray m;
	m.accept(first,second,size1,size2);
	m.showAfterMerge();
}
