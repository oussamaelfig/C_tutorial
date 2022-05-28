// Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.
// Expected Output :

// Pointer : Demonstrate the use of & and * operator :
// --------------------------------------------------------
//  m = 300
//  fx = 300.600006
//  cht = z

//  Using & operator :
// -----------------------
//  address of m = 0x7ffda2eeeec8
//  address of fx = 0x7ffda2eeeecc
//  address of cht = 0x7ffda2eeeec7

//  Using & and * operator :
// -----------------------------
//  value at address of m = 300
//  value at address of fx = 300.600006
//  value at address of cht = z

// Using only pointer variable :
// ----------------------------------
//  address of m = 0x7ffda2eeeec8
//  address of fx = 0x7ffda2eeeecc
//  address of cht = 0x7ffda2eeeec7

//  Using only pointer operator :
// ----------------------------------
//  value at address of m = 300
//  value at address of fx= 300.600006
//  value at address of cht= z

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m = 300;
    double fx = 300.600006;
    char cht = 'z';

    int *pt1;
    double *pt2;
    char *pt3;
    pt1=&m;
    pt2=&fx;
    pt3=&cht;
    printf("Using & operator : \n-----------------------\n");
    printf("address of m = %x\n", &m);
    printf("address of fx = %x\n", &fx);
    printf("address of cht = %x\n", &cht);

    printf("Using & and * operator : \n-----------------------\n");
    printf("value at address of m = %i\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));

    printf("Using only pointer variable : \n-----------------------\n");
    printf("address of m = %x\n",pt1);
    printf("address of fx = %x\n",pt2);
    printf("address of cht = %x\n",pt3);

    printf("Using only pointer variable : \n-----------------------\n");
    printf("value at address of m = %i\n", *pt1);
    printf("value at address of fx = %f\n", *pt2);
    printf("value at address of cht = %c\n", *pt3);

    return 0;
}
