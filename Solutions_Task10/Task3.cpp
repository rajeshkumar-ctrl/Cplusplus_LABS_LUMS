#include <iostream>

using namespace std;

const int N = 10;

int main ()
{
    int numbers[N], target = 0, count = 0;
    
    cout<<"Fill the array with 10 integers:"<<endl;

    for (int i = 0; i < N; i++)
    {
        cout << "Type an integer: ";
        cin >> numbers[i];
    }

    cout << "\nType the target value to look for: ";
    cin >> target;

    for (int i = 0; i < N; i++)
    {
        if (numbers[i] == target)
        {
                    count++;
                    if(count>1)
                    numbers[i] = 0;
          
        }
    }
    
    cout<<"Updated Array:"<<endl;
    for(int i = 0; i< N; i++)
    {
		cout<<numbers[i]<<endl;
	}


    return 0;
}
