#include<iostream>
using namespace std;

void zeroSmaller(int& first, int& second)
{
	if( first < second )
	first = 0;
	else
	second = 0;
}
////////////////////////////////////////////////////
int main()
{	
	int a=4, b=7, c=11, d=9;
	
	zeroSmaller(a, b);
	zeroSmaller(c, d);
	
	cout << "a=" << a << "\tb=" << b
	<< "\nc=" << c << "\td=" << d;
	
	return 0;
}

