#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        Rectangle(){
            length = 0;
            breadth = 0;
        }
        // above is a DEFAULT CONSTRUCTOR...

        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        //above is a PARAMETERISED CONSTUCTOR...


        int area(){
            return length*breadth;
        }


        int peri(){
            return 2*(length + breadth);
        }

        void setlength(int l)
        {
            length = l;
        }

        void setbreadth(int l){
            breadth = l;
        }

        int getLength(){
            return length;
        }

        int getbreadth(){
            return breadth;
        }

        ~Rectangle(){
            cout<<"Destructor\n";
        } //This is a destructor tho we do not need it here...we need it when we do dynamic memory allocation...
};
// in c++ we write extra codes, that we may not need bt still we write it....



// Rectangle::Rectangle(int l, int b)
// {
//     length = l;
//     breadth = b;
// }

// int Rectangle::area()
// {
//     return length*breadth;
// }

// int Rectangle::peri()
// {
//     return 2*(length+breadth); 
// }


int main()
{
    Rectangle r(10,5);
    cout << r.area() << endl;
    cout << r.peri() << endl;
    cout << r.getLength() << endl;
    r.setlength(20);
    cout << r.getLength() << endl;
}

// Converting class into TEMPELATE...do on your own...

