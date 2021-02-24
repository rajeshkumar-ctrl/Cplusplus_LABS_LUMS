#include<iostream>
using namespace std;

string middle(string str);	//Declaration of "middle"

int main()
{
	string word;
	cout<<"Keep entering the words, enter QUIT to stop the program"<<endl<<endl;
	
	while(1)	// forever loop 
	{
	cout<<"Enter a word: ";
	cin>>word;
	if(word == "QUIT")
	break;
	cout<<"The middle is: "<<middle(word)<<endl;
    }

	
	return 0;
}

////////// Definition   ///////////////////////

string middle(string str)
{
	string mid;
	int l = str.length();
	if(l%2 == 0)
	{
		mid = str.substr((l/2)-1 , 1) + str.substr((l/2), 1);
	}
	else
		mid = str.substr(l/2, 1);
		
	return mid;
}

