
// This program tells you that we can perform calculations with pointer variables same as we do with normal variables //

#include<iostream>
using namespace std;
int main()
{
	int number;
	int remainder = 0, reverse = 0;   //variables we need for computations
	
	int *num, *rem, *rev;
	
	cout<<"Enter any number: "<<endl;
	cin>>number;
	
	num=&number;			//assigning the address of each variable to the corresponding pointer
	rem = &remainder;
	rev = &reverse;
	//////////////////// working only in terms of pointers ///////////////////////
	while(*num>0)
	{
		*rem=*num%10;
		*rev=(*rev)*10+*rem;
		
		*num=*num/10;		
	}
	
	cout<<"\nReverse: "<<*rev<<endl;
	
	return 0;

}

