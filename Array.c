#include<stdio.h>
int main(){

    // int A[5]; //Declaration of Array

    // A[0] = 3;
    // A[1] = 10;
    // A[2] = 5;

    // int A[5] = {2,3,4,5,6};

    // int a = sizeof(A);

    // printf("%d\n", sizeof(A));


    // printf("%d\n", A[1]);
    // printf("%d", A[0]);




    //using for loop to access elements of the array :--

    // for(int i=0;i<5;i++){
    //     printf("%d\n", A[i]);
    //     //this will print the value at that index

    //     printf("%d\n", &A[i]);
    //     //this will print the address of the elements of array
    // }




    //Taking size of array as input from User :--

    int m;
    printf("Enter n : ");
    scanf("%d", &m);

    int A[m];
    // A[0] = 5;
    //this is allowed but we can't initialize this array
    // for(int i=0;i<m;i++){
    //     printf("%d\n", A[i]);
    // }

    for(int i=0; i<m; i++){
        printf("Enter value at index %d : ", i);
        scanf("%d", &A[i]);
    }

    for(int i=0;i<m;i++){
        printf("The elements at index %d is %d\n", i, A[i]);
    }













    return 0;
}