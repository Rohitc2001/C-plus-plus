                     // WAP to check that number is ARMSTRONG or not.
#include<iostream>
using namespace std;

int main()
{
    int num, temp, res=0, rem;

    cout << "Enter the number : ";
    cin >> num;
    
    temp = num;

    while(num != 0)
    {
        rem = num % 10;
        res = res + (rem*rem*rem);
        num = num / 10;
    }

    if(temp == res)
    {
        cout << "Number is Armstrong." << endl;
    }
    else
    {
        cout << "Number is Not Armstrong." << endl;
    }
}
