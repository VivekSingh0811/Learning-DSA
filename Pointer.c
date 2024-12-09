#include<stdio.h>
#include<stdlib.h>

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

    // printf("%d\n", a);
    // printf("%d\n", *p);
    // printf("%p\n", p);
    // printf("%p", &a);


// //  Pointer to an Array :---
// int A[5] = {2,4,6,8,10};
// int *p;
// p = A; // We don't havr to give ampersand when we are dealing wit pointers bcoz name of the arrray itself is the address of first index of array
// // p = &A[0]; // We can write like this if we want to use ampersand...
//  printf("%d\n\n", *p);

//  for(int i=0; i<5; i++)
//  {
//     printf("%d\n",p[i]);
//  }
// // Whenever we declare anything in our progras it is created inside the STACK now let us create an array inside HEAP....





    // int *p;
    // p = (int*)malloc(5*sizeof(int));
    // // p = {10,15,14,21,31}; // we can't do like this....
    // p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;
    // for(int i=0; i<5; i++)
    // {
    //     printf("%d\n",p[i]);
    // }


    // free(p); // This bcoz we did dynamic memory allocation...i.e., allocated memory in HEAP;






// Creating all differrent types of pointers :---

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    printf("%d\n", sizeof(p1));
    printf("%d\n", sizeof(p2));
    printf("%d\n", sizeof(p3));
    printf("%d\n", sizeof(p4));
    printf("%d\n", sizeof(p5));

// Now in output we got to know that oututof al the pointers is 4 bytes...
// Whatever the type of data is, all the pointers takes 4 bytes that is equal to integer size...thus size of pointer is independent of its data type...






    return 0;
}