#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;


    void initialise(int l, int b)
    {
        length = l;
        breadth = b;
    }


    int area()
    {
        return length*breadth;

    }

    int peri()
    {
        return 2*(length + breadth);
    }

};

// Everything by default is public but in class its private so one way to access it is to make it public... 

int main()
{
    Rectangle r;

    int l, b;

    cout << "Enter Length and Breadth " ;
    cin >> l >> b;
    
    r.initialise(l, b);
    
    int Area = r.area();
    int Peri = r.peri();

    cout << Area << "\n" << Peri << endl;

    return 0;
}

