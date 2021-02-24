#include<iostream>
using namespace std;
int main()
{
	int shirts=0;
	int pps = 900;
	double bill=0;
	cout<<"Enter the number of shirts you want to buy: ";
	cin>>shirts;
	if (shirts > 0 && shirts < 3)
	{
		bill = shirts*pps;        //no discount and price per shirt is Rs. 900
		cout<<"You total bill for "<<shirts<<" shirts is Rs. "<<bill<<" only"<<endl;
	}
	else if (shirts >= 3 && shirts <= 9)									   //10% discount category
	{
		double discount = (10.0/100)*900;   
		pps= 900 - discount;               //price per shirt to be evaluated after applying 10% discount
		bill = shirts*pps;
		cout<<"You total bill for "<<shirts<<" shirts is Rs. "<<bill<<" only"<<endl;
		
	}
		else if (shirts >= 10 && shirts <= 19)								    //15% discount category
	{
		double discount = (15.0/100)*900;
		pps= 900 - discount;
		bill = shirts*pps;
		cout<<"You total bill for "<<shirts<<" shirts is Rs. "<<bill<<" only"<<endl;
		
	}
		else if (shirts >= 20 && shirts <= 29)									//20% discount category
	{
		double discount = (20.0/100)*900;
		pps= 900 - discount;
		bill = shirts*pps;
		cout<<"You total bill for "<<shirts<<" shirts is Rs. "<<bill<<" only"<<endl;
		
	}
		else if (shirts >= 30)													//25% discount category
	{
		double discount = (25.0/100)*900;
		pps= 900 - discount;
		bill = shirts*pps;
		cout<<"You total bill for "<<shirts<<" shirts is Rs. "<<bill<<" only"<<endl;
		
	}
	else if(shirts <= 0)
	cout<<"Invalid Entry!!";
	return 0;
}
