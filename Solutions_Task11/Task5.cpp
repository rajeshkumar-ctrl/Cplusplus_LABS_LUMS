#include<iostream>
using namespace std;

	const int ROW = 3;
	const int COL = 3;
	

void transpose(int mat[][COL], int r1, int trans[][COL], int r2)
{
	cout<<"\nTransposing Array...\n";
	for(int i = 0; i < r1; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			trans[i][j]=mat[j][i];
		}
	}
}

void display_matrix(int mat[][COL], int r)
{
	for(int i=0; i<r; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
}

int main()
{
	int arr[ROW][COL], i, j, arrT[ROW][COL];
	
	cout<<"Enter the elements of a matrix of order "<<ROW<<" by "<<COL<<": "<<endl;
	
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			cin>>arr[i][j];			//taking elements from the user
		}
	}

    transpose(arr, ROW, arrT, ROW);   //computing transpose and modifying "arrT" by saving transpose in it
    
	cout<<"\nOriginal matrix:\n";
	display_matrix(arr, ROW);
	
	cout<<"\nTranspose of the Matrix is:\n";
	display_matrix(arrT, ROW);

	
	return 0;
}
