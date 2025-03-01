#include<iostream>
using namespace std;

// CALL BY VALUE :---
// In this if formal parameters are changed the actual paraeters still remains same

// int add(int a, int b)
// {
//     int c;
//     // c = a + b;
//     // return c;
//     a++;
//     cout << a;
//     return 0;
// }

// int main()
// {
//     int num1=10, num2=15, sum;

//     sum = add(num1,num2);
//     cout << endl << num1;
//     // cout << "Sum is " << sum;
//     return 0;
// }
// // In call by value the actual paramete doesnt change....a will change but num1 will remain same...
// // So wehn to use call by value...when computer has to do some operations and get some result and return that result...






//CALL BY ADDRESS :---

// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int num1=10, num2=15;

//     swap(&num1,&num2);

//     cout << "First number: " << num1 << endl;
//     cout << "Second Number: " << num2 << endl;

//     return 0;
// }




//CALL BY REFRENCE :---
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1=10, num2=15;

    swap(num1,num2);

    cout << "First number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    return 0;
}
