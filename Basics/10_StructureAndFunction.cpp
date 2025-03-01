#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}


int area(struct Rectangle r)
{
   return r.length * r.breadth;

}

int peri(struct Rectangle r)
{
    return 2*(r.length + r.breadth);
}

int main()
{
    Rectangle r = {0,0};

    int l, b;

    cout << "Enter Length and Breadth " ;
    cin >> l >> b;
    
    initialise(&r, l, b);
    
    int Area = area(r);
    int Peri = peri(r);

    cout << Area << "\n" << Peri << endl;

    return 0;
}

