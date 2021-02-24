#include<iostream>
using namespace std;
int main()
{
	int numberOfStu; 		
	int count = 0;
	int *id = new int [numberOfStu];
	float *gp = new float [numberOfStu];
	
	cout<<"Please enter the total number of students in the batch:\t";
	cin>>numberOfStu;
	
	for(int i = 0; i < numberOfStu; i++)
	{
		cout<<"\nEnter the ID for student "<< i+1 <<"\t";
		cin>>id[i];
		cout<<"\nEnter the CGPA for student "<< i+1 <<"\t";
		cin>>gp[i];
	}
	
	cout<<endl<<endl;
	cout<<"The following students can not appear in the next semester due to very low CGPA"<<endl;
	
	for(int i = 0; i < numberOfStu; i++)
	{
		if (gp[i] < 1.5)
		{
			cout<<id[i]<<endl;
			count++;			
		}

	}
	
	if (count == 0)
	{
		cout<<"\n\t\tNo such case found!"<<endl;
	}
	
	
	return 0;
}
