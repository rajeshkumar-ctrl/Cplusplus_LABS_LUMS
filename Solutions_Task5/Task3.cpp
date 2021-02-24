#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c, discriminant;
	cout<<"                **Finding the nature of the roots of a quadratic equation (ax2 + bx + c = 0)**\n\n";
	cout<<"Enter the values for the coefficeints of equation i.e a, b and c:"<<endl;
	cin>>a>>b>>c;
	
	discriminant = pow(b,2) - 4*a*c;
	
	cout<<endl;
	if(discriminant < 0)
	{
		cout<<"Roots are complex and distinct"<<endl;
	}
	else if(discriminant == 0)
	{
		cout<<"Roots are real and equal"<<endl;
	}
	else if(discriminant > 0)
	{
		cout<<"Roots are real and distinct"<<endl;
		
						/* ------- To check whether is it perfect square or not --------- 
			If the square root is not a whole number, result of right hand side expression (line# 29) will also be decimal and "a" will be storing only
			integeral part of it. In this case a%10 must produce some value other than zero indicating "discriminant" is not a perfect square  */
		int a = (sqrt(discriminant)*10);				 
	    if (a%10 == 0)										
	    cout<<"Roots are rational"<<endl;				
	    else
	    cout<<"Roots are irrational"<<endl;
	}
	return 0;
}
