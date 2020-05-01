#include<iostream>
#include<conio.h>
using namespace std;

struct intrest{
	float Ans;
	int num_of_years;
	float yearly_intrest;
	int initial_amount;
};

	int main()
{
	
	intrest obj;
	cout<<"\nEnter initial_amount:\n";
	cin>>obj.initial_amount;
	cout<<"\nEnter num_of_years:\n";
	cin>>obj.num_of_years;
	cout<<"\nEnter yearly_intrest:\n";
	cin>>obj.yearly_intrest;
	intrest *ptr;
	ptr=new intrest[obj.num_of_years];
	
	for (int i=1;i<=obj.num_of_years;i++)
	{
	cout<<"\nYour Your Money At The End of " <<i<< " Years At The Intrest of " <<obj.yearly_intrest<< " Is:";
	obj.Ans=obj.initial_amount+(obj.initial_amount*obj.yearly_intrest);
	cout<<obj.Ans;
	obj.initial_amount=obj.Ans;
	}
		
	getch();
}