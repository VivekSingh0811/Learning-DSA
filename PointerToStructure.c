#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
//     struct Rectangle r = {10,5};
//     struct Rectangle *p = &r;

//     r.length = 15;
//     // (*p).length = 15; // Next line is better way to do this
//     p->length = 20;

// //Conclusion : For normal variable use dot operator and for pointer variable use arrow operator...

// DYNAMIC ALLOCATION :---

struct Rectangle *p;
p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
p->length = 10;
p->breadth = 5;

printf("%d\n", (*p).length);
printf("%d", (*p).breadth);



















    return 0;
}