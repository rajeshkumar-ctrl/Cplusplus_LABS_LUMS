#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Please enter an integer:\t";
	cin>>number;
	
	cout<<endl;
	
	for(; number!=0 ; number = number/2)
	{
		cout<<number%2<<endl;
	}
	
	
	return 0;
}
