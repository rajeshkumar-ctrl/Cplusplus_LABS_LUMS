#include<iostream>
using namespace std;
int main()
{
	float decpounds;                 // input from user (new-style pounds)
    int pounds, shillings, pence;                         // old-style (integer) pounds
    float decfrac, decfrac2;                    // decimal fraction (smaller than 1.0)
    cout<<"Enter the amount in pounds: ";
    cin>>decpounds;
    pounds = static_cast<int>(decpounds);                   // remove decimal fraction
    decfrac = decpounds - pounds;                                // regain decimal fraction
    shillings = static_cast<int>(decfrac*20);
    decfrac2 = (decfrac*20) - shillings;
    pence = static_cast<int>(decfrac2*12);
    cout<<"The equivalent old style pound is "<<pounds<<"."<<shillings<<"."<<pence<<endl;
    return 0;
} 
