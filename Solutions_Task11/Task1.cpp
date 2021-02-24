#include<iostream>
using namespace std;

int alternating_sum(int num[], int siz)
{
	int sum = 0;
	for(int i = 0; i < siz; i++)
	{
		if(i%2 == 0)
		{
			sum = sum + num[i];
		}
		else
		{
			sum = sum - num[i];
		}
	}
	
	return sum;
}

int main()
{
	//Checking the function with some test arrays
	int arr[9] = {1, 4, 9, 16, 9, 7, 4, 9, 11};
	int arr1[6] = {2, 5, 3, 9, 0, 5};
	
	cout<<alternating_sum(arr, 9)<<endl; 
	cout<<alternating_sum(arr1, 6)<<endl;
	
	return 0;
		
}

