/*******************************************************************************
* 
* Description: Examples of using printf.
*
* Author: Oussama el-figha
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    // To declare a comment in one line

    /*To declare a block comemnt
    in N lines 
    .
    .
    .
    .
    ................
    ------*********
    ------*********
    ------*********
    */

   //Constants
   //To declare a constant

   const int num = 8;
   printf("the num is %d\n", num);

   //if we try to change it here it will generate an error
    //num=7;

    printf("%d\n", num);

    printf("Hello");
    //the hello is considered as constant too
    //beacuse it won't change
    return 0;
}
