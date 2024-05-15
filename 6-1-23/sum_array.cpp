#include<iostream>
using namespace std;
class Sum
{
	private:
	int *arr;
	
	public:
		void setValue(int a[])
		{
			arr=a;
			
		}
		
		int calSum()
		{
			int i, s=0;
			
			for(i=0;i<5;i++)
			{
				s = s + arr[i];
			}
			return s;
		}
};

int main()
{
	Sum s;
	int a[5]={10,20,30,40,50};
	
	s.setValue(a);
	
	int result;
	
	result=s.calSum();
	
	cout<<"Sum of all elements is "<<result<<endl;
	
	
	
}
