#include <iostream>
using namespace std;

void reversit(char arr[], int siz)
{
	for(int j = 0; j < siz/2; j++) //swap each character in first half
	{ 
	char temp = arr[j]; // with character
	arr[j] = arr[siz-j-1]; // in second half
	arr[siz-j-1] = temp;
	}
}

int main()
{
	const int MAX = 80; //array capacity
	char ch[MAX];
	int curr_siz;
	
	cout<<"Enter the size of array (must be less than 80):\t";
	cin>>curr_siz;
	
	cout << "\nNow enter "<<curr_siz<<" characters:"<<endl; 
	for(int i = 0; i < curr_siz; i++)
	cin>>ch[i];		//get characters from the user
	
	reversit(ch, curr_siz);	//update array in reverse order
	
	cout << "\nCharacters in reverse order: "<<endl;   
	for(int i = 0; i < curr_siz; i++)
	cout<<ch[i]<<"\t";		//display it
	
	cout<<endl;
	
	return 0;
}
