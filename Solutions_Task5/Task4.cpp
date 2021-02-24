#include<iostream>
using namespace std;
int main()
{
	int option;
	double num1, num2, ans;
	cout<<"					**Basic Caluclator**\n\n";
	cout<<"\nEnter 2 numbers:"<<endl;
	cin>>num1>>num2;
	if (cin.fail())
	{
		cout<<"Invalid Input"<<endl;
		return 1;
	}
	cout<<"\n\n";
	cout<<"Press 1 to perform addition"<<endl;
	cout<<"Press 2 to perform subtraction"<<endl;
	cout<<"Press 3 to perform multiplication"<<endl;
	cout<<"Press 4 to perform division"<<endl;
	cin>>option;


	switch(option)
	{
		case 1: {
			ans = num1 + num2;
			break;
		}
		case 2: {
			ans = num1 - num2;
			break;
		}
		case 3: {
			ans = num1 * num2;
			break;
		}
		case 4: {
			ans = num1 / num2;
			break;
		}
		default: {
			cout<<"\nInvalid Input";
			return 2;
			break;
		}
	}
	cout<<"\nThe result is:\t"<<ans<<endl;
	
	return 0;
}
