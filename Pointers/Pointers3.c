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
 //   Changing Value Pointed by Pointers
//Let's take an example.
 int* pc, c;
c = 5;
pc = &c;
c = 1;
printf("%d", c);    // Output: 1
printf("%d", *pc);  // Ouptut: 1

// We have assigned the address of c to the pc pointer.

// Then, we changed the value of c to 1. Since pc and the address of c is the same, *pc gives us 1.

// Let's take another example.

int* pc, c;
c = 5;
pc = &c;
*pc = 1;
printf("%d", *pc);  // Ouptut: 1
printf("%d", c);    // Output: 1


// We have assigned the address of c to the pc pointer.

// Then, we changed *pc to 1 using *pc = 1;. Since pc and the address of c is the same, c will be equal to 1.

// Let's take one more example.

int* pc, c, d;
c = 5;
d = -15;

pc = &c; printf("%d", *pc); // Output: 5
pc = &d; printf("%d", *pc); // Ouptut: -15


//  Initially, the address of c is assigned to the pc pointer using pc = &c;. Since c is 5, *pc gives us 5.

// Then, the address of d is assigned to the pc pointer using pc = &d;. Since d is -15, *pc gives us -15.



    return 0;
}
