// Write a program in C to find the maximum number between two numbers using a pointer.
// Test Data :
// Input the first number : 5
// Input the second number : 6
// Expected Output :

// 6 is the maximum number.


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    printf("Input the first number\n");
    scanf("%d", &a);
    printf("Input the second number\n");
    scanf("%i", &b);
    int *pt1;
    int *pt2;

    pt1=&a;
    pt2=&b;

    if(*pt1 > *pt2){
        printf("\n%i is the maximum number.",*pt1);
    }else{
        printf("\n%i is the maximum number.",*pt2);
    }


    return 0;
}
