#include <iostream>
using namespace std;
int main()
{
   
	int rows;
	cout<<"Please enter a number:\t";
	cin>>rows;
	
	for(int i = 1; i <= rows; i++)
	    {
	        
			for(int empty = 1; empty <= (rows-i); empty++)		//to print spaces
	        {  
	            cout<<" ";
	        }
	        
	        for(int digit = 1; digit <= i; digit++)		//to print numbers
	        {
	        	
	         cout<<digit;
	    
			}
			
	    	cout<<endl;
	    }
    return 0;
    
}



