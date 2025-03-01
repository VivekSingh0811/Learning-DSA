// STATIC AND GLOBAL VARIABLE :---

#include<iostream>
using namespace std;

int fun1(int n){

    if(n>0){
        return fun1(n-1) + n;
    }
    return 0;
}



int x = 0; // Global variable...

int fun2(int n){

    // static int x = 0;

    if(n>0){
        x++;
        return fun2(n-1) + x;
    }
    return 0;
}

// So in this the copy of x will not be created again and again like n, the same x will be used throughout as its type is Static...AND even if we declare it outside the function as a global variable the output will still remain same...

// Thus usage of static and global variabe leads to same output...






int main(){

    int a = 5;
    cout << fun1(a) << endl;
    cout << fun2(a) << endl;
    return 0;
}

