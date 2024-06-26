#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
	int hrs,sec,min=0;
	public : void time()
	{
		cout<<"enter hours :"<<endl;
		cin>>hrs;
		cout<<"enter minutes :"<<endl;
		cin>>min;
		cout<<"enter seconds :"<<endl;
		cin>>sec;
	
		min=hrs*60;
		sec=min*60;
			cout<<endl<<hrs<<"hours="<<min<<"minutes="<<sec<<"seconds";		
	}	
};
 int main()
{

Time obj;
	obj.time();
	
	return 0;
}