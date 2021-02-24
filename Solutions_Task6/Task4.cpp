#include<iostream>
using namespace std;
int main()
{
	string str;
	int count = 0;
	cout<<"Let's play a riddle game!!"<<endl<<endl;
	cout<<"What has hands but can not clap?"<<endl;
	do
	{
		cin>>str;
		
		if(str == "clock")      //If user guesses it right say congrats and terminate the program
		{
			cout<<"Congrats, you won!!"<<endl;
			return 1;
		}	
		
		count++;		//To count the number of iterations of loop used to keep check on the number of trials
	}
	while(count<3);				//Keep asking the answer untill user run out of trials
	
	cout<<"\nYou loss!!"<<endl;
	cout<<"The right answer is \"Clock\""<<endl;

	
	
	return 0;
}
