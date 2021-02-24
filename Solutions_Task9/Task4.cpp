#include<iostream>
#include<cmath>
using namespace std;

////////////////////////////	Average  ///////////////////////////////////////
double average(double s1, double s2, double s3, double s4)
{
	double avg = (s1+s2+s3+s4)/4;
	return avg;
}
////////////////////////////	Standard_Deviation  ///////////////////////////////////////
double SD(double s1, double s2, double s3, double s4)
{
	double a = average(s1, s2, s3, s4);
	
	double sd = sqrt( ( pow((s1-a),2) + pow((s2-a),2) + pow((s3-a),2) + pow((s4-a),2) )/4 );
	
	return sd;
}
//////////////////////////// Get Data  ///////////////////////////////////////
void get_data(double& s1, double& s2, double& s3, double& s4)
{
	cout<<"Enter 1st number:\t";
	cin>>s1;
	cout<<"Enter 2nd number:\t";
	cin>>s2;
	cout<<"Enter 3rd number:\t";
	cin>>s3;
	cout<<"Enter 4th number:\t";
	cin>>s4;	
}
//////////////////////////// Show Data  ///////////////////////////////////////
void show_data(double& s1, double& s2, double& s3, double& s4)
{
	double std = SD(s1, s2, s3, s4);
	cout<<endl<<endl;
	cout<<"Standard deviation of "<<s1<<", "<<s2<<", "<<s3<<" and "<<s4<<" is "<<std<<endl;
}
////////////////////////////////////////////////////////////////////////////////

int main()
{
	double s1, s2, s3, s4;
	get_data(s1, s2, s3, s4);
	show_data(s1, s2, s3, s4);
	return 0;
}
