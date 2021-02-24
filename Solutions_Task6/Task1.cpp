#include<iostream>
using namespace std;
int main()
{
	int number, sum = 0;
	
////////////////////////////////////////////   Approach 1 - DO-WHILE loop    //////////////////////////////////////////

/*	cout<<"Please enter negative numbers:"<<endl;
	do
	{
		cin>>number;
		if(cin.fail())										
		break;
		sum+= number;
	}
	while(number<0);
	
	cout<<"Total sum is: "<<sum-number<<endl;                */
	
////////////////////////////////////////////   Approach 2 - WHILE loop    //////////////////////////////////////////
	
	cout<<"Please enter negative numbers:"<<endl;
	cin>>number;
	while(number<0)
	{
		sum+= number;
		cin>>number;
		if(cin.fail())								//You were given a hint during the lab to use break statement to handle invalid input
		break;
    }
	
	cout<<"Total sum is: "<<sum<<endl;     
	
	return 0;
}
