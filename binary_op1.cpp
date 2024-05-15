#include<iostream>
using namespace std;
class Add
{
	private:
		int no;
		public:
			void setValue(int no)
			{
				this->no=no;
			}
			
			void operator +(Add ad)
			{
				int result= this->no+ad.no;
				cout<<"Addition is "<<result<<endl;
				
			}
	
	
	
};

int main()
{
	Add ad1,ad2;
	ad1.setValue(10);
	ad2.setValue(20);
	
	ad1+ad2; //call here binary operator
	
	
}

