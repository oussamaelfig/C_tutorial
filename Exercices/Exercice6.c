// Write a program in C to store n elements in an array and print the elements using pointer. Go to the editor
// Test Data :
// Input the number of elements to store in the array :5
// Input 5 number of elements in the array :
// element - 0 : 5
// element - 1 : 7
// element - 2 : 2
// element - 3 : 9
// element - 4 : 8
// Expected Output :

//  The elements you entered are :
//  element - 0 : 5
//  element - 1 : 7
//  element - 2 : 2
//  element - 3 : 9
//  element - 4 : 8

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5;
    int a[n];
    printf("Input the first number\n");
    scanf("%d", &a[0]);
    printf("Input the second number\n");
    scanf("%i", &a[1]);
    printf("Input the third number\n");
    scanf("%i", &a[2]);
    printf("Input the fourth number\n");
    scanf("%i", &a[3]);
    printf("Input the fifth number\n");
    scanf("%i", &a[4]);
    int *ptr = &a[0];
    printf("\nThe elements you entered are :\n");
    printf("element - %i\n", *ptr);
    printf("element - %i\n", *(ptr +1));
    printf("element - %i\n", *(ptr +2));
    printf("element - %i\n", *(ptr +2));
    printf("element - %i\n", *(ptr +2));
    return 0;
}
