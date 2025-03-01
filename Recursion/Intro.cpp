// RECURSION : It has two phases, call and return...think of it as a rubber band, if u stretchit, it will come back to its original shape...

#include<iostream>
using namespace std;

void fun1(int n){
    if(n>0){
        cout << n << endl;
        fun1(n-1);
    }
}
// it will givw output 3, 2, 1...

void fun2(int n){
    if(n>0){
        fun2(n-1);
        cout << n << endl;
    }
    
}
// it will give output 1, 2, 3...


int main(){

    int n = 3;
    fun1(n);
    fun2(n);

    return 0;
}

// the abve exapmles is to show two phases of recursion by performing... priting while calling and printing while returning...