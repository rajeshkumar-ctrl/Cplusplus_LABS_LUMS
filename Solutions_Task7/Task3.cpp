#include <iostream>
using namespace std;
 
int main()
{
	double number, min = 0, max = 0, average = 0, range = 0, sum = 0;
	int count;
	cout<<"How many numbers do you want to enter?\t";
	cin>>count;
	
	cout<<"Please enter "<<count<<" numbers:"<<endl;
	
	for(int i = 0; i < count ; i++)
	{
		cin>>number;
		sum += number;
		if(i==0)
		{
			min = number;
			max = number;
			continue;
		}	 
		if(min>number)
		min = number;
		
		if(max<number)
		max = number;
	}
	
	average = sum/count;
	range = max - min;
	
	cout<<"\nSum:\t\t"<<sum<<endl;	
	cout<<"Avergage:\t"<<average<<endl;	
	cout<<"Minimum:\t"<<min<<endl;
	cout<<"Maximum:\t"<<max<<endl;
	cout<<"Range:\t\t"<<range<<endl;

	return 0;
}
