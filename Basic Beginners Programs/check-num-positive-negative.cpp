                    // Program to check entered is Positive Negative or Zero.
#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    if(num > 0)
    {
        cout << "Number is POSITIVE." << endl; 
    }
    else if(num < 0)
    {
        cout << "Number is NEGATIVE." << endl; 
    }
    else
    {
        cout << "Number is ZERO." << endl; 
    }

}