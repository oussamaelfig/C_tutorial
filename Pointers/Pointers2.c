/*******************************************************************************
* 
* Description: Pointers in C
*
* Author: Oussama el-figha
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char const *argv[])
{
    //Here is how we can declare pointers.
    int* p;
    //Here, we have declared a pointer p of int type.

    //You can also declare pointers in these ways.
    //int *p1;
    //int * p2;   


    int* p1, p2;
    //Here, we have declared a pointer p1 
    //and a normal variable p2.


    //Assigning addresses to Pointers
    int* pc, c;
    c = 5;
    pc = &c;
    //Here, 5 is assigned to the c variable. And,
    // the address of c is assigned to the pc pointer.


    //To get the value of the thing pointed by the pointers, we use the * operator.
    printf("%d", *pc);   // Output: 5
    //Here, the address of c is assigned to the pc pointer. To get the value stored in that address, we used *pc.

    return 0;
}

