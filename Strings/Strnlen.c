#include <stdio.h>
#include <string.h>
// It returns length of the string if it is less than the value specified for maxlen (maximum length) otherwise it returns maxlen value.

int main()
{
    char str1[20] = "BeginnersBook";
    printf("Length of string str1 when maxlen is 30: %d\n", strnlen(str1, 30));
    printf("Length of string str1 when maxlen is 10: %d", strnlen(str1, 10));
    return 0;
}

// Have you noticed the output of second printf statement, even though the string length was 13 it returned only 10 because the maxlen was 10.