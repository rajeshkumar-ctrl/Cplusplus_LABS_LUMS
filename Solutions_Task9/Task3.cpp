#include <iostream>
using namespace std;

int checkCharacter(string& str, char& ch)
{
	int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  ch)
        {
            count++;
        }
    }
    
    return count;
	
}

int main()
{
	string text;
	char character;
	
	cout<<"Please enter some word/sentence:"<<endl;
	getline(cin, text);
	cout<<"Which character do you want to count in the text?"<<endl;
	cin>>character;

    cout<<endl;
    cout << "Number of " << character << " = " << checkCharacter(text, character);

    return 0;
}
