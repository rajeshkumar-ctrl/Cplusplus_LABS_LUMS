#include<iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size) 
{
	if(a_size != b_size)
	return false;
	else
	{
		for(int i = 0; i < a_size; i++)
		{
			if(a[i] != b[i])
			return false;
		}
		
		return true;
	}
}

int main()
{
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[6] = {1, 2, 3, 4, 9};
	
	cout<<"CASE 1: Different sizes"<<endl;
	cout<<equals(arr1, 5, arr2, 6)<<endl<<endl;
////////////////////////////////////////////////////	
	
	int arr3[5] = {10, 9, 3, 4, 9};
	
	cout<<"CASE 2: Different elements"<<endl;
	cout<<equals(arr1, 5, arr3, 5)<<endl<<endl;
////////////////////////////////////////////////////
	
	int arr4[5] = {1, 2, 3, 4, 5};
	
	cout<<"CASE 3: Identical arrays"<<endl;
	cout<<equals(arr1, 5, arr4, 5);	

	return 0;
}
