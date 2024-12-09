#include<iostream>
using namespace std;

struct Rectangle{
    int length, breadth;
};

int main(){

    // struct Rectangle r = {10,5};
    struct Rectangle r;
    r.length = 10;
    r.breadth = 5;

    cout << "The Area of Rectangle: " << r.length*r.breadth << endl;










    return 0;
}