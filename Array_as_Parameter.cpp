#include<iostream>
using namespace std;


// // void fun(int A[], int n)
// void fun(int *A, int n)
// {
// //     cout << sizeof(A)/sizeof(int) << endl;
// //     // It is not giving the size of array as its 5, it is giving the size of integer pointer, which our compiler takes 4, modern compilers takes 8 as well....so its 4/4 = 1....



//     // for(int i=0; i<n; i++)
//     // {
//     //     cout << A[i] << endl;
//     // }



//     A[0] = 15;
// }

// int main()
// {
//     int A[] = {2,4,6,8,10};
//     int n=5;
//     fun(A,n);

//     for(int x:A) //for-each loop
//     {
//         cout << x << " ";
//     }

//     return 0;
// }




//ANOTHER EXAMPLE OF RETURNING AN ARRAY :---

int *fun(int size)
{
    int *p;

    p = new int[size];

    for(int i=0; i<size;i++)
    {
        p[i] = i+1;
    }

    return p;
}

int main()
{
    int *ptr, sz = 5;

    ptr = fun(sz);

    for(int i=0; i<sz; i++)
    {
        cout << ptr[i] << endl;
    }



    return 0;
}