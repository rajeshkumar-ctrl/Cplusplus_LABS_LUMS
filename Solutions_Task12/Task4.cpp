#include<iostream>
using namespace std;
void addarrays(int *arr1, int *arr2, int *arr3, int siz)
{
	for(int i = 0; i < siz; i++)
	{
		*(arr3+i) = *(arr1+i) + *(arr2+i);
	}
}
int main()
{
	const int SIZE = 5;
	int array1[SIZE] = {1, 3, 5, 2, 8};
	int array2[SIZE] = {2, 5, 3, 6, 9};
	int array3[SIZE] = { };
	cout<<"Array 1\t\tArray2"<<endl;
	for(int i = 0; i < SIZE; i++)
	{
		cout<<*(array1+i)<<"\t\t"<<*(array2+i)<<endl;
	}
	
	addarrays(array1, array2, array3, SIZE);
	
	cout<<"\nAfter sum:"<<endl;
	for(int i = 0; i < SIZE; i++)
	{
		cout<<"\t\t"<<*(array3+i)<<endl;
	}
	return 0;
}
