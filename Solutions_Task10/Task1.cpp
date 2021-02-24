#include <iostream>
using namespace std;

int main( )
{
	int i, score[5], max = 0, count = 0;
	double sum = 0;

	cout << "Enter upto 10 scores, press any character to quit:\n";
	
	for (i = 0; i < 10; i++)
	{
		cin >> score[i];
		
		if(i== 0 && cin.fail())
		return 1;
		else if(cin.fail())
		break;

		count++;
		sum+= score[i];
		
		if (score[i] > max)
		max = score[i];			//max is the largest of the values score[0],..., score[i]
	}
	
	cout << "\nThe average score is " << sum/count <<endl
	<< "The highest score is " << max << endl
	<< "The scores and their differences from the highest are:\n\n";
	
	for (i = 0; i < count; i++)
	cout << score[i] << " off by " << (max - score[i]) << endl;
	
	return 0;
}
