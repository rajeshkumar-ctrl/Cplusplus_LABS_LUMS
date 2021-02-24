#include<iostream>
using namespace std;
double replace_if_greater(double* p, double x)
{
	if(x > *p)
	{
		*p = x;
        return *p;
	}
	else
	return *p;
	
}

int main()
{
	double num = 0, fixedValue =100;
	
	cout<<"Please enter a number: ";
	cin>>num;
	
	double *ptr;
	ptr = &num;
	
	cout<<"\nAfter changes your number is: "<<replace_if_greater(ptr, fixedValue)<<endl;
	
	return 0;
	
}
