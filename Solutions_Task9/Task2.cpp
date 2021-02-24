#include<iostream>
using namespace std;

const float LOW_PROFIT_MARGIN = 0.05;
const float HIGH_PROFIT_MARGIN = 0.10;
const int THRESHOLD = 7; 

void get_input(double& cost, int& shelf_time);
double price(double cost, int shelf_time);
void give_output(double cost, int shelf_time, double price);

int main()
{
	double cost, retail_price;
	int shelf_time;
	get_input(cost, shelf_time);
	retail_price = price(cost, shelf_time);
	give_output(cost, shelf_time, retail_price);
	return 0;
}
////////////////////////////////////////////////////////
void get_input(double& cost, int& shelf_time)
{
	cout<<"Please enter wholesale cost of the item:\t";
	cin>>cost;
	cout<<"Please enter expected number of days until sold:\t";
	cin>>shelf_time;
}
////////////////////////////////////////////////////////
double price(double cost, int shelf_time)
{
	double price;
	if(shelf_time <= 7)
	price = cost + (LOW_PROFIT_MARGIN * cost);
	else
	price = cost + (HIGH_PROFIT_MARGIN * cost);	
	
	return price; 
}
////////////////////////////////////////////////////////
void give_output(double cost, int shelf_time, double price)
{
	cout<<endl<<endl;
	cout<<"			***Pricing Details of This Item***"<<endl<<endl;
	cout<<"Wholesale cost:\t\t"<<cost<<endl;
	cout<<"Consumer Price:\t\t"<<price<<endl;
	cout<<"Shelf Time(days):\t"<<shelf_time<<endl;
}
