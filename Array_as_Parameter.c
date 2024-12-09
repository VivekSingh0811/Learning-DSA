#include<stdio.h>
#include<stdlib.h>

// // void fun(int A[], int n)
// void fun(int *A, int n)
// {
//     // printf("%d ", sizeof(A)/sizeof(int));
// //     // It is not giving the size of array as its 5, it is giving the size of integer pointer, which our compiler takes 4, modern compilers takes 8 as well....so its 4/4 = 1....



//     // for(int i=0; i<n; i++)
//     // {
//     //     printf("%d", A[i])
//     // }



//     A[0] = 15;
// }

// int main()
// {
//     int A[] = {2,4,6,8,10};
//     int n=5;
//     fun(A,n);

//     for(int i=0; i<n; i++) //for-each loop
//     {
//         printf("%d ", A[i]);
//     }

//     return 0;
// }



// ANOTHER EXAMPLE OF RETURNING AN ARRAY :---

int *fun(int size)
{
    int *p;

    p = (int *)malloc(size*sizeof(int));

    for(int i=0; i<size;i++)
    {
        p[i] = i+1;
    }

    return p;
}

int main()
{
    int *ptr, sz = 9;

    ptr = fun(sz);

    for(int i=0; i<sz; i++)
    {
        printf("%d ", ptr[i]);
    }



    return 0;
}