#include<iostream>
#include<string.h>
using namespace std;

class Product
{
	private:
		int id,price;
		char name[90];
	public:	
		void setDetail(char name[],int id,int price)
		{
			strcpy(this->name,name);
			this->id=id;
			this->price=price;
			
		}
		
		void showDetail()
		{
			cout<<name<<"\t"<<id<<"\t"<<price<<endl;
			
		}
		int getPrice()
		{
			return price;
		}
  
};

int main()
{
	Product p[5];
	int id,price,i,j;
	char name[90];
		
	for(i=0;i<5;i++)
	{
		cout<<"Enter the name id and price of product"<<endl;
		cin>>name>>id>>price;
		
		p[i].setDetail(name,id,price);
				
	}
	cout<<"Display the product details"<<endl;
	for(i=0;i<5;i++)
	{
		p[i].showDetail();
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		
		int	pprice=p[i].getPrice();
		int	nprice=p[j].getPrice();
			
			if(pprice<nprice)
		
			{
				Product temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	
	cout<<"Display the product details in decending"<<endl;
	for(i=0;i<5;i++)
	{
		p[i].showDetail();
	}
	
	
	
}
