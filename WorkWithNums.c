/*******************************************************************************
* 
* Description: Examples of using numbers.
*
* Author: Oussama el-figha
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    printf("%d\n", 5+5); // this gives 10 it gives me a integer as result
    printf("%f\n", 8.9); // this gives 10
    printf("%f\n", 4.5+6); //we can add float num with an int and this gives a float num
    printf("%d\n", 4*6); //multiplication
    printf("%d\n", 15/6); //this return a integer number and not a float num
    printf("%f\n", 15/6); //this return a float number and not an int num
    

    //Mahtematic functions in C
    //those functions won't work if you replace the %f with %d
    printf("%f\n", pow(2,3)); // this return 2 raise 3 2^3
    printf("%f\n", sqrt(36)); // this return 6
    printf("%f\n", ceil(36.324)); // this return 37
    printf("%f\n", floor(36.624)); // this return 36

    //You can find more on C math function in google
    return 0;
}
