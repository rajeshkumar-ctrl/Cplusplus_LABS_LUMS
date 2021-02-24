#include<iostream>
using namespace std;
int main()
{
	const string months = "January, Febraury, March, April, May, June, July, August, September, October, November, December";
	cout<<"Program to display the short forms of months of a year..."<<endl<<endl;
	string s1 = months.substr(0,3);
	string s2 = months.substr(9,3);
	string s3 = months.substr(19,3);
	string s4 = months.substr(26,3);
	string s5 = months.substr(33,3);
	string s6 = months.substr(38,3);
	string s7 = months.substr(44,3);
	string s8 = months.substr(50,3);
	string s9 = months.substr(58,3);
	string s10 = months.substr(69,3);
	string s11 = months.substr(78,3);
	string s12 = months.substr(88,3);
	string New = s1+", "+s2+", "+s3+", "+s4+", "+s5+", "+s6+", "+s7+", "+s8+", "+s9+", "+s10+", "+s11+", "+s12;
	cout<<New;

	return 0;
}
