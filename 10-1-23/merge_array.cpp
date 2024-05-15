#include<iostream>
using namespace std;

class MergeArray
{
	private:
	int *f,*s,t[100],s1,s2;	
	
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
			int k,i,j;
			
			for(i=0;i<s1;i++)
			{
				t[i]=f[i];
			}
			for(i=0,k=s1;i<s2;i++)
			{
				t[k]=s[i];
				k++;
				
			}
			cout<<"Display the first matrix:"<<endl;
			for(i=0;i<s1;i++)
			{
				cout<<f[i]<<"\t";
			}
			
			cout<<"\nDisplay the Second matrix:"<<endl;
			for(i=0;i<s2;i++)
			{
				cout<<s[i]<<"\t";
			}
			cout<<"\nMerge array:"<<endl;
			for(i=0;i<s1+s2;i++)
			{
				cout<<t[i]<<"\t";
			}
			cout<<"\nMerge array after the sorting"<<endl;
			for(i=0;i<s1+s2;i++)
			{
				for(j=i+1;j<s1+s2;j++)
				{
					if(t[i]>t[j]){
						int temp=t[i];
						t[i]=t[j];
						t[j]=temp;
					}
				}
			}
			for(i=0;i<s1+s2;i++){
				cout<<t[i]<<"\t";
			}
			
			cout<<"\nAfter the merging and sorting"<<endl;
			cout<<"\nFirst array"<<endl;
			for(i=0;i<s1;i++){
				cout<<t[i]<<"\t";
			}
			
			cout<<"\n second array"<<endl;
			for(i=s1;i<s1+s2;i++){
				cout<<t[i]<<"\t";
			}
		}
};

int main()
{
	int first[100],second[100],size1,size2;
	int i;
	cout<<"Enter the size for first array"<<endl;
	cin>>size1;
	cout<<"Enter the first array elements"<<endl;
	for(i=0;i<size1;i++)
	{
		cin>>first[i];
	}
	cout<<"Enter the size for second array"<<endl;
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
