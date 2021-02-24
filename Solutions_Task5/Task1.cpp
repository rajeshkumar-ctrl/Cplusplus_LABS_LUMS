#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	string str, str2;
	cout<<"Hello! I will tell you which type of parallelogram (rectangle, square, rhombus) you are thinking about, let's start..."<<endl;
	cout<<"Note: Please answer all the questions with YES or NO only."<<endl<<endl;
	cout<<"Are all the sides of parallelogram equal?\t";
	cin>>str;
	if(str == "YES")
	{
		cout<<"Are all the angles of parallelogram 90 degrees?\t";
		cin>>str2;
		if(str2 == "YES")
		cout<<"It is square!!"<<endl;
		else if(str2 == "NO")
		cout<<"It is rhombus!!"<<endl;
		else
		cout<<"Wrong Input"<<endl;
	}
	else if(str == "NO")
	cout<<"It is rectangle!!"<<endl;
	else
	cout<<"Wrong Input"<<endl;
	
	return 0;
}
