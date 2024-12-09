#include<stdio.h>
// CALL BY VALUE :---
// In this if formal parameters are changed the actual paraeters still remains same

int add(int a, int b)
{
    int c;
    // c = a +b;
    // return c;
    a++;
    printf("%d\n",a);
    return 0;
}

int main()
{
    int num1=10, num2=15, sum;

    sum = add(num1,num2);
    printf("%d", num1);
    // printf("The sum is %d",sum);
    return 0;
}
// In call by value the actual paramete doesnt change....a will change but num1 will remain same...
// So wehn to use call by value...when computer has to do some operations and get some result and return that result...






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

//     printf("%d\n", num1);
//     printf("%d\n", num2);

//     return 0;
// }
