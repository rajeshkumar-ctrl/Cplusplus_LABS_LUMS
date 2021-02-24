#include<iostream>
using namespace std;

//list of functions used in the program
bool all_the_same (double x, double y, double z);	
bool all_different (double x, double y, double z);
bool sorted (double x, double y, double z);

int main()
{
	double a, b, c;
	cout<<"Enter 3 numbers:"<<endl;
	cin>>a>>b>>c;
	cout<<"All same: "<<all_the_same(a, b, c)<<endl;
	cout<<"All different: "<<all_different(a, b, c)<<endl;
	cout<<"In ascending order: "<<sorted(a, b, c)<<endl;
	
	return 0;
}

// Definitions of the functions

bool all_the_same (double x, double y, double z)
{
	if(x == y && x == z)
	return true;
	else
	return false;
}
/////////////////////////////////////////////////////
bool all_different (double x, double y, double z)
{
	if(x != y && x != z && y != z)
	return true;
	else
	return false;
}
/////////////////////////////////////////////////////
bool sorted (double x, double y, double z)
{
	if(x < y && y < z)
	return true;
	else
	return false;
}
