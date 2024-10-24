#include<iostream>
#include<iomanip>
#define pi 3.141592653
using namespace std;


int main()
{
    cout << fixed << setprecision(9);
    //my Code
    double r;
    cin >> r;
    cout << pi*r*r;
}