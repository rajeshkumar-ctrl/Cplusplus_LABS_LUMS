#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const double PI = 3.14;
	double rs= 3, rc;
	double h;
	double Vs= 0, Vc= 0;
	Vs= (static_cast<float>(4)/3)*PI*pow(rs,3);
	cout<<"Volume of a sphere of radius "<<rs<<" is: "<<Vs<<endl;
	cout<<"\n                        **Let's calculate the volume of a cone**"<<endl<<endl;
	cout<<"Please enter the radius of cone: ";
	cin>>rc;
	cout<<"\nPlease enter the height of cone: ";
	cin>>h;
	Vc= PI*pow(rc,2)*(static_cast<float>(h)/3);
	cout<<"\nVolume of a cone with height "<<h<<" and radius "<<rc
	<<" is: "<<Vc<<endl;
}
