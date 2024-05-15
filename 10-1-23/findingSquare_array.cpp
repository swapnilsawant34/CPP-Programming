#include<iostream>
using namespace std;

class FindsquareInArray
{
	private:
		int *a,i;
	
	public:
	int setValue(int x[])
	{
		a=x;
		
	}
	
	int *show()
	{
		int square=1;
		cout<<"Square in array "<<endl;
		for(i=0;i<5;i++)
		{
			cout<<a[i]*a[i]<<endl;
			
		}
		return a;
	}
		
};

int main()
{
	int x[]={5,6,7,8,9};
	
	
	FindsquareInArray sq;
	sq.setValue(x);
	int *result = sq.show();
	
//	cout<<"Output Array is "<<result;
}
