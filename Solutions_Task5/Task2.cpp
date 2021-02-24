#include<iostream>
using namespace std;
int main()
{
	double month1_bill, month2_bill, month3_bill, month4_bill, average_bill;
	cout<<"Please enter the water bill you had for the last 4 months:"<<endl;
	cout<<"Note: The amount will be taken in dollars only."<<endl<<endl;
	cin>>month1_bill>> month2_bill>> month3_bill>> month4_bill;
	if(cin.fail())
	{
		cout<<"Wrong Input";
		return 1;
	}
	if(month1_bill < 0 || month2_bill < 0 || month3_bill < 0 || month4_bill < 0)
	{
		cout<<"Bill can not be negative!";
		return 2;
	}
	
	average_bill = (month1_bill + month2_bill + month3_bill + month4_bill)/4;
	
	if(average_bill>75)
	{
		cout<<"You are using too much water"<<endl;
		cout<<"Your average bill per month is:\t"<<average_bill<<"$"<<endl;
	}
	else if(average_bill>=25 && average_bill<=75)
	{
	    cout<<"You are using typical amount of water"<<endl;	
	    cout<<"Your average bill per month is:\t"<<average_bill<<"$"<<endl;
	}	
	else
	{
		cout<<"Great!! You are going good"<<endl;
		cout<<"Your average bill per month is:\t"<<average_bill<<"$"<<endl;
	}
	
	
	return 0;
}
