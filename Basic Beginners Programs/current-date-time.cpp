                                # Program to print current date and time.
#include<iostream>
#include<ctime>
#include<cmath>

using namespace std;

int main()
{
    time_t t = time(NULL);
    tm* tptr = localtime(&t);

    cout << "Current Date : " << (tptr -> tm_mday) << " - " << (tptr -> tm_mon) + 1  << " - " << (tptr -> tm_year) + 1900 << endl;
    cout << "Current Time : " << (tptr -> tm_hour) << " : " << (tptr -> tm_min) + 1  << " : " << (tptr -> tm_sec) + 1900 << endl;

}