// Write a program in C to demonstrate how to handle the pointers in the program.
// Address of m : 0x7ffcc3ad291c
//  Value of m : 29

//  Now ab is assigned with the address of m.
//  Address of pointer ab : 0x7ffcc3ad291c
//  Content of pointer ab : 29

//  The value of m assigned to 34 now.
//  Address of pointer ab : 0x7ffcc3ad291c
//  Content of pointer ab : 34

//  The pointer variable ab is assigned with the value 7 now.
//  Address of m : 0x7ffcc3ad291c
//  Value of m : 7

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m = 29;
    printf("Address of m : %x\n", &m);
    printf("Value of m : %i\n", m);

    int *ab;
    ab = &m;
    printf("Now ab is assigned with the address of m. \n");
    printf("Address of pointer ab : %x\n", ab);
    printf("Content of pointer ab : %i\n", *ab);

    printf("The value of m assigned to 34 now.\n");
    m = 34;
    printf("Address of pointer ab : %x\n", &(*ab));
    printf("Content of pointer ab : %i\n", *ab);

    printf("The pointer variable ab is assigned with the value 7 now.\n");
    *ab = 7;
    printf("Address of m : %x\n", &m);
    printf("Value of m : %i\n",m);
    return 0;
}
