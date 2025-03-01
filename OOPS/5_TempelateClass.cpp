#include<iostream>
using namespace std;


template <class T>
class Arithmetic{
    private:
        T a;
        T b;
    
    public:
        Arithmetic(T a, T b);
            T add();
            T sub();
        
};


template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a = a;
    this->b = b;

}


template <class T>
T Arithmetic<T>::add(){
    T c;
    c = a+b;
    return c;
}


template <class T>
T Arithmetic <T>::sub(){
    T c;
    c = a-b;
    return c;
}

int main(){
    Arithmetic <int> ar(10,5);
    cout << ar.add() << endl;
    Arithmetic <float> ar1(1.5, 1.3);
    cout << ar1.add()<< endl;
    Arithmetic <char> ar3('A', 'B');
    cout << (int)ar3.add() << endl;
}

// So using tempelate class we were able to use same function to add two different type of data types i.e., integer, float And char as well...

