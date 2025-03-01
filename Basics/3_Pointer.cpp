#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // int a = 10;
    // int *p;
    // p = &a;

    // cout << a << endl;
    // cout << *p << endl;
    
    // cout << p << endl;
    // cout << &a << endl;



//     int A[5] = {2,4,6,8,10};
//     int *p;
//     p = A; // We don't havr to give ampersand when we are dealing wit pointers bcoz name of the arrray itself is the address of first index of array
//     // p = &A[0]; // We can write like this if we want to use ampersand...

//     cout << *p << endl << endl;

//     for(int i=0; i<5; i++)
//     {
//         cout << p[i] << endl;
//     }
// // Whenever we declare anything in our program it is created inside the STACK now let us create an array inside HEAP....



    // int *p;
    // p = new int[5]; // We dont need malloc like C here...its simpler here...
    // // p = {10,15,14,21,31}; // we can't do like this....
    // p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;
    // for(int i=0; i<5; i++)
    // {
    //     cout << p[i] << endl;
    // }

    // delete [] p; // This bcoz we did dynamic memory allocation...i.e., allocated memory in HEAP
    // // if its a variable then just write delete <variable_name>...the above is in the case of Array




// Creating all differrent types of pointers :---

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    // cout << sizeof(p1) << endl;
    // cout << sizeof(p2) << endl;
    // cout << sizeof(p3) << endl;
    // cout << sizeof(p4) << endl;
    // cout << sizeof(p5) << endl;

// Now in output we got to know that output of al the pointers is 4 bytes...
// Whatever the type of data is, all the pointers takes 4 bytes that is equal to integer size...thus size of pointer is independent of its data type...



    return 0;
}