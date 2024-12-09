#include<stdio.h>

struct Rectangle{
    int length, breadth;
};

int main(){
    // struct Rectangle r={10,5};
    struct Rectangle r;

    r.length = 5;
    r.breadth = 10;

    printf("Area of Rectangle: %d", r.length*r.breadth);


    return 0;
} 