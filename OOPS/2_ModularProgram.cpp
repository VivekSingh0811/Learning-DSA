#include<iostream>
using namespace std;


int area(int length, int breadth)
{
   return length * breadth;

}

int peri(int length, int breadth)
{
    return 2*(length+breadth);
}

int main()
{
    int length = 0, breadth = 0;

    cout << "Enter Length and Breadth " ;
    cin >> length >> breadth;

    int Area = area(length, breadth);
    int Peri = peri(length, breadth);

    cout << Area << "\n" << Peri << endl;

    return 0;
}