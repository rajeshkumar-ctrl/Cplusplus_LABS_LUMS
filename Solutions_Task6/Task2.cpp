#include<iostream>
#include<string>
using namespace std;
int main()
{
	
//////////////////////////////////////		 Pseudocode translation 		 ////////////////////////////////////////////////////

/*	int number;
	int min;
	bool first = true;
	while (cin>>number)                    //Condition is false whenever user provides a non-integer input
	{
	
		if(first)
		{
			min = number;
			first = false;
		}
		
		
		else if(number<min)
		    min = number;
		    
	}
	
	cout<<min;              */
	
//////////////////////////////////////////////		Another approach    ///////////////////////////////////////////////////////

	int number, min;
	
	cout<<"Please keep on entering numbers, enter any character to quit and see the results: "<<endl;
	cin>>number;
	
	min = number;			//Initialize it with the first input given by the user
	
	
	while(1)							//Forever loop since the condition is always true
	{
		cin>>number;
		
		if(cin.fail())			//loop will be terminated when the reading input process becomes unsuccessful 
		break;
		
		if(number<min)				
		min = number;					//Update the "min" if the current input is less than the value stored previously in it
		
	}

	cout<<min;						//print the minimum value out of all after getting out of the loop
	
	return 0;
}
