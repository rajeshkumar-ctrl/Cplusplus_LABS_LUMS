#include<iostream>
using namespace std;

int main()
{
	string words[5] = {"Say", "hello", "to", "the", "world!"};
	int lengths[5] = { };
	
	for(int i = 0; i < 5; i++)
	{
		lengths[i] = words[i].length();
	}
	
		for(int j = 0; j < 5; j++)
	{
		if( j== 0 )
		cout<<"Word\t\tLength"<<endl<<endl;
		cout<<" "<<words[j]<<"\t\t"<<lengths[j]<<endl;
		continue;
		cout<<" "<<words[j]<<"\t\t"<<lengths[j]<<endl;
	}
	
	return 0;
}
