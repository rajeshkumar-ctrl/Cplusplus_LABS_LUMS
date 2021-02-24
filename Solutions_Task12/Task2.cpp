#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 3;
	char letters[SIZE];
	char temp;
	
	cout<<"Please enter "<<SIZE<<" upper case letters:"<<endl;
	for(int i = 0; i < SIZE; i++)
	{
		cin>>letters[i];
	}
	
	////////////// SORTING ARRAY CODE ///////////////////////
    for (int i = 0; i < SIZE; i++)
	{
        for (int j = 1 + i; j < SIZE; j++) 
		{
            if (*(letters+i) > *(letters+j)) 
			{
                temp = *(letters+i);
               *(letters+i) = *(letters+j);
                *(letters+j) = temp;
            }
        }
    }
    
    /////////// Displaying array ///////////////////
    cout<<"\nThe sorted array(alphabetically):"<<endl;
    for(int i = 0; i < SIZE; i++)
    {
    	cout<<*(letters+i)<<endl;
	}
	
	return 0;
}
