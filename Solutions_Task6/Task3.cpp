#include<iostream>
#include<string>
using namespace std;
int main()
{
	
    string word;
    cout<<"Enter a word: "<<endl;
    cin >> word;
    
    int length = word.length();				//store the length of entered word in variable "length"
    
    int index=length-1;	           //Index of the last character of a string is always 1 less than its length
	
	cout<<endl;
	cout<<"The reverse is: "<<endl;				
    while (index>=0)		      //run the loop for all the indicis starting from index# 4 to print the word in reverse order
    {
        cout<<word.substr(index,1);			//Print the extracted string (of length 1) each time
        
        index--;	
    }

	return 0;
}
