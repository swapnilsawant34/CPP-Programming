#include<iostream>
#include<string.h>
using namespace std;
int size;
int *sort(int a[])
{
	int i,j,temp;
	
		for(i=0;i<size;i++)
	{
		for(j=(i+1);j<size;j++)
		{
			if(a[i]>a[j]){
			
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	
	cout<<"After sorting ";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<"\n";
	}
	return a;
	
}
char *sort(char name[])
{
	
		int i,j,temp,len;
		
		len=strlen(name);
	
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(name[i]>name[j]){
			
			temp=name[i];
			name[i]=name[j];
			name[j]=temp;
		}
		}
	}
	return name;
	
}

int main()
{
	int a[10],i,*result1;
	char name[90]; char *result2[90];
	
	cout<<"Enter the size of array:\n";
	cin>>size;
	
	cout<<"Enter the array elements:\n";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\nDisplay the array elements:\n";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<"\n";
	}
	
	result1=sort(a);
	
 cout<<"Sorting \n";	
	for(i=0;i<size;i++)
	{
		cout<<result1[i]<<"\t";
	}
	
	cout<<"\nEnter the string\n";
	cin>>(name);
	
	
	result2[90]=sort(name);
	cout<<"sorted array \n  "<<result2[90];
}
