                    // Program to find Greatest of 3-integers
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;

    cout << "Enter Number-1 : ";
    cin >> n1;

    cout << "Enter Number-2 : ";
    cin >> n2;

    cout << "Enter Number-3 : ";
    cin >> n3;

    if(n1 > n2 && n1>n3)
    {
        cout << "\nNumber-1 is Greatest" << endl;
    }
    else if(n2 > n1 && n2>n3)
    {
        cout << "\nNumber-2 is Greatest" << endl;
    }
    else if(n3 > n1 && n3>n2)
    {
        cout << "\nNumber-3 is Greatest" << endl;
    }
    else if(n1 == n2 || n2 == n1)
    {
        cout << "\nNumber-1 & Number-2 are equal" << endl;
    }
    else if(n2 == n3 || n3 == n2)
    {
        cout << "\nNumber-2 & Number-3 are equal" << endl;
    }
    else if(n1 == n3 || n3 == n1)
    {
        cout << "\nNumber-1 & Number-3 are equal" << endl;
    }
}