                    // Program to accept any characeter and print out it's ASCII code
#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter the char : ";
    cin >> ch;

    cout << "The ASCII value of " << ch << " is " << int(ch) << endl;
}