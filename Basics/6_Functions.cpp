#include<iostream>
using namespace std;

int add(int a, int b) //Prototype
{
    // Below is declaration and body of function...
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x,y,z;

    x = 10;
    y = 5;
    z = add(x , y); //Function call
    cout << "Sum is " << z << endl;
}
