#include <iostream>
using namespace std;

int main()
{
    int r;
    double pi, circle;
    pi = 3.14;
    cout << "enter radius \n";
    cin >> r;
    circle = 2 * pi * r;
    cout << "circumference is:" << circle << endl;

    return 0;
}