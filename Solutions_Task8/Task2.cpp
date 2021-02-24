#include<iostream>
using namespace std;

void paycheck (float hourly_rate , int hours)
{
	double gross, net, tax;
	gross = hours*hourly_rate;
	if(gross < 30000)
	{
		tax = (2.0/100)*gross;	
		net = gross - tax;
	}
	else
	{
		tax = (2.0/100)*gross;
		net = gross - tax;
	}
	
	cout<<"Gross pay: "<<gross<<endl;
	cout<<"Net pay: "<<net<<endl;
	
}

int main()
{
	int hrs;
	float pay_rate;
	cout<<"		   Welcome to the payroll section"<<endl<<endl;
	cout<<"Please enter number of hours you have worked in a month: ";
	cin>>hrs;
	cout<<"\nPlease enter pay rate per hour: ";
	cin>>pay_rate;
	cout<<endl;
	paycheck(pay_rate, hrs);
	
}
