#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // struct Rectangle r = {10,5};
    // cout << r.length << endl;
    // cout << r.breadth << endl;

    // Rectangle *p = &r;

    // p->length = 15;
    // p->breadth = 7;

    // cout << p->length << endl;
    // cout << p->breadth << endl;

    // r.length = 15;

    
// //Conclusion : For normal operator use dot operator and for pointer variable use arrow operator...



// DYNAMIC ALLOCATION :---

Rectangle *p; // here we dont have to write 'struct Rectangle' like we have to in 'C'....
p = new Rectangle;
p->length = 10;
p->breadth = 5;

cout << p->length << endl;
cout << p->breadth << endl;

delete p;

return 0;
}
