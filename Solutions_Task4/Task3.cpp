#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character: "<<endl;
	cin>>ch;
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	cout<<"This is a vowel"<<endl;
	else
	{
		int value = static_cast<int>(ch);
		value++;
		char new_ch = static_cast<char>(value);
		cout<<"The next character is "<<new_ch<<endl;
	}
	return 0;
}
