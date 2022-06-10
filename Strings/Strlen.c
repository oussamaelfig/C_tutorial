#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "BeginnersBook";
    printf("Length of string str1: %d", strlen(str1));
    return 0;
}

// strlen vs sizeof
// strlen returns you the length of the string stored in array, however sizeof returns the total allocated size assigned to the array. So if I consider the above example again then the following statements would return the below values.

// strlen(str1) returned value 13.
// sizeof(str1) would return value 20 as the array size is 20 (see the first statement in main function).