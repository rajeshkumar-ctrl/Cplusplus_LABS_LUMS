#include<iostream>
using namespace std;
int main()
{
	int month_no=0;
	cout<<"Enter month number: "<<endl;
	cin>>month_no;
	//jan,march,may,jul,aug,oct,dec has 31 days
	if(month_no == 1 || month_no == 3 || month_no == 5 || month_no == 7 || month_no == 8 || month_no == 10 || month_no == 12 ) 	
	cout<<"31 Days"<<endl;
	else if(month_no == 4 || month_no == 6 ||month_no == 9 ||month_no == 11)   //April,jun,sep,nov has 30 days
	cout<<"30 Days"<<endl;
	else if(month_no == 2)
	cout<<"28 Days"<<endl;
	else
	cout<<"Invalid Entry!!"<<endl;
	
	return 0;
}
