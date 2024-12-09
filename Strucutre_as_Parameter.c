#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

///PASS BY VALUE :---

// void fun(struct Rectangle r)
// {
//     r.length = 11;
//     r.breadth = 9;
//     cout << "Length " << r.length << endl << "Breadth " << r.breadth << endl;
// }

// int main()
// {
//     struct Rectangle r = {10,5};

//     fun(r); // We have passed "r", that is nothing but the structure...so we have paassed the structure...

//     printf("Length %d\nBreadth %d\n", r.length, r.breadth);

//     return 0;
// }

// // The above was call by value so another memory space will be created and changes made in formal parameters will not reflect in actual parameter....




//PASS BY ADDRESS :--

// void fun(struct Rectangle *p)
// {
//     p->length = 11;
//     p->breadth = 9;
//     printf("Length %d\n Breadth %d\n", p->length, p->breadth);
// }

// int main()
// {
//     struct Rectangle r = {10,5};

//     fun(&r); // Here we have passed "&r".....

//     printf("Length %d\nBreadth %d\n", r.length, r.breadth);

//     return 0;
// }

// // The above was call by address so no other memory space will be created and changes made in formal parameters will be reflect in actual parameter....

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    
    p->length = 15;
    p->breadth = 7;
    return p;
}

int main()
{
    struct Rectangle *ptr = fun();
    printf("Length %d\nBreadth %d\n", ptr->length, ptr->breadth);

    free(ptr);

    return 0;
}