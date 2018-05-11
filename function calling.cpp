#include<iostream>
using namespace std;

//declaration of functions

void printMessage(void);
float calAverage(int, int, int);

int main()
{
    int a, b, c;
    float avg;

    //calling first function
    printMessage();
    cout << "Enter first number : ";
    cin >>a;
    cout << "Enter second number : ";
    cin >>b;
    cout << "Enter third number : ";
    cin >>c;

    //calling average function
    avg = calAverage (a,b,c);
    cout << "\n Average is = " << avg << "\n";
    return 0;
}

void printMessage(void)
{
    cout << "Hello.. I am function's body!!!\n";
}
float calAverage(int x, int y, int z)
{
    int sum = 0;
    sum = (x+y+z);
    return ((float) sum / 3);
}
