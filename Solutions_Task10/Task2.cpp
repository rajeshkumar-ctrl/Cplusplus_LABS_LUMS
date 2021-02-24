#include<iostream>
using namespace std;
int main()
{
	char ch[5];
	cout<<"Please fill the array by entering 5 lower case characters:"<<endl;
	for(int i= 0; i < 5; i++)
	{
		cin>>ch[i];
	}
	cout<<"\nUpdated Array:"<<endl;
	for(int i = 0; i < 5; i++)
	{
		int temp = static_cast<int>(ch[i]);
		temp = temp - 32;
		ch[i] = temp;
		cout<<ch[i]<<endl;
	}
	return 0;
}
