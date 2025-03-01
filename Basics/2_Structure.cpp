#include<iostream>
#include<string>
using namespace std;

struct Rectangle
{
    int length, breadth;
};

struct complex
{
    int real;
    int imag;
};

struct student
{
    string name;
    string usn;
    string branch;
    int sem;
};

int main(){

    // struct Rectangle r = {10,5}; //Declaration + initialization
    struct Rectangle r; //Declaration
    r.length = 10;
    r.breadth = 5;

    cout << "The Area of Rectangle: " << r.length*r.breadth << endl;
    cout << "The size of rectangle structure: " << sizeof(r) << endl;




    struct complex c;
    c.real = 5;
    c.imag = 3;

    cout<< "The complex number: " << c.real << "+" << c.imag << "i"<< endl;




    student s;
    cout << "Enter Name: " ;
    getline(cin, s.name);
    cout << "Enter USN: " ;
    getline(cin, s.usn);
    cout << "Enter Branch: " ;
    getline(cin, s.branch);
    cout << "Enter Semester: " ;
    cin >> s.sem;
    

    cout << "Student Details :---" << endl;
    cout << s.name << endl;
    cout << s.usn << endl;
    cout << s.branch << endl;
    cout << s.sem << endl;


    return 0;
}

// Using structures we can build a whole dect of 52 cards with three properties color, rank, type(face or number)....each card will have different set of these three peoperties...