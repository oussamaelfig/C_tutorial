// Write a program in C to add two numbers using pointers.
// Test Data :
// Input the first number : 5
// Input the second number : 6
// Expected Output :

// The sum of the entered numbers is : 11

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

    int sum= *pt1 + *pt2;
    printf("The sum of the entered numbers is : %i",sum);
    return 0;
}
