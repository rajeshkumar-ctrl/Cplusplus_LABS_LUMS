#include <iostream>
#include <string>
using namespace std;    

int main()
{
	string phrase;
	int word_count = 1, vowel_count = 0;		//All the phrases contain atleast one word
	cout<<"Enter a phrase:\t";
	getline(cin,phrase);
	
	int len = phrase.length();
	
	for(int i=0 ; i<len ; i++)
	{
		if(phrase.substr(i,1) == " ")
		word_count++;					
		
		else if(phrase.substr(i,1) == "A" || phrase.substr(i,1) == "E" || phrase.substr(i,1) == "I" || phrase.substr(i,1) == "O" || phrase.substr(i,1) == "U" ||
		        phrase.substr(i,1) == "a" || phrase.substr(i,1) == "e" || phrase.substr(i,1) == "i" || phrase.substr(i,1) == "o" || phrase.substr(i,1) == "u")
		    vowel_count++;
	}
	
	
	cout<<"\nNumber of words in this phrase:   "<<word_count<<endl;
	cout<<"Number of vowels in this phrase:   "<<vowel_count<<endl;	
	
	return 0;
}
