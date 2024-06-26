#include<iostream>
#include<conio.h>
using namespace std;
class Time 
{

	int hrs,min,sec=0;
	
	public :void time()
	{
		cout<<"enter seconds :"<<endl;
		cin>>sec;
		sec=min/60;
		min=hrs/60;
		cout<<hrs<<"hours="<<min<<"minutes="<<sec<<"seconds";
}
};
  int main()
{
	Time obj;
	obj.time();
	
	return 0;
}















