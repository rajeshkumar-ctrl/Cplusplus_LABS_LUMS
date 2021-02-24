#include<iostream>
using namespace std;

char passORfail(double MARKS)
{
	if(MARKS >= 50)
	return 'P';
	else if(MARKS < 50)
	return 'F';	
}


int main()
{
	int marks;
	
	for(int i=1; i<=3; i++)
	{
		cout<<"Enter marks (out of 100) for student# "<<i<<endl;
		cin>>marks;		//Assume that user always enters valid input
		
		cout<< "Your grade is: " << passORfail(marks)<<endl;
	}
	return 0;
}
