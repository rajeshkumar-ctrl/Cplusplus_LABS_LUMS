#include<iostream>
using namespace std;

int main()
{
	const int ROW = 3;
	const int COL = 4;
	
	int matA[ROW][COL], matB[ROW][COL], matC[ROW][COL] = { };
	
	cout<<"Please enter the elements of 1st matrix(3 by 4):"<<endl;
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		cin>>matA[i][j];
	}
	
	cout<<"Please enter the elements of 2nd matrix(3 by 4):"<<endl;
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		cin>>matB[i][j];
	}
	
	cout<<"\nAdding both of them...."<<endl<<endl;
	
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		matC[i][j] = matA[i][j] + matB[i][j];
	}
	
	cout<<"The resultant matrix is:"<<endl<<endl;
	
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		cout<<matC[i][j]<<"\t";
		
		cout<<endl;
	}
	
	cout<<endl;
	
	return 0;
}
