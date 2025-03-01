#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

///PASS BY VALUE :---

// void fun(struct Rectangle r)
// {
//     r.length = 11;
//     r.breadth = 9;
//     cout << "Length " << r.length << endl << "Breadth " << r.breadth << endl;
// }

// int main()
// {
//     struct Rectangle r = {10,5};

//     fun(r); // We have passed "r", that is nothing but the structure...so we have paassed the structure...

//     cout << "Length " << r.length << endl << "Breadth " << r.breadth << endl;
//     // printf("Length %d\n Breadth %d\n", r.length, r.breadth);

//     return 0;
// }

// // The above was call by value so another memory space will be created and changes made in formal parameters will not reflect in actual parameter....




//PASS BY ADDRESS :--

// void fun(struct Rectangle *p)
// {
//     p->length = 11;
//     p->breadth = 9;
//     cout << "Length " << p->length << endl << "Breadth " << p->breadth << endl;
// }

// int main()
// {
//     struct Rectangle r = {10,5};

//     fun(&r); // Here we have passed "&r".....

//     cout << "Length " << r.length << endl << "Breadth " << r.breadth << endl;
//     // printf("Length %d\n Breadth %d\n", r.length, r.breadth);

//     return 0;
// }

// // The above was call by address so no other memory space will be created and changes made in formal parameters will be reflect in actual parameter....

// struct Rectangle *fun()
// {
//     struct Rectangle *p;
//     p = new Rectangle;
    
//     p->length = 15;
//     p->breadth = 7;
//     return p;
// }

// int main()
// {
//     struct Rectangle *ptr = fun();
//     cout << "Length " << ptr->length << endl << "Breadth " << ptr->breadth << endl;

//     delete ptr;  // Deallocate memory after use
    
//     return 0;
// }


void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return (r.length * r.breadth);
}

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    struct Rectangle r;

    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 20);
}

// The above is a brief idea about how we cam pass by value and pass by adress and pass by refrence to get the task done accordingly.....