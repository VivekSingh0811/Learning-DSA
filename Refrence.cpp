// This is only available in C++

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    
    cout << a << endl << r << endl;
    // a and r are same...we have given two name for same variable...

    int b = 30;
    r = b;
    
    cout << a << endl << r << endl;



    return 0;
}   