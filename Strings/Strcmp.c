//int strcmp(const char *str1, const char *str2);

// It compares the two strings and returns an integer value. If both the strings are same (equal) then this function would return 0 otherwise it may return a
//  negative or positive value based on the comparison.

// If string1 < string2 OR string1 is a substring of string2 then it would result in a negative value. If string1 > string2 then it would return positive value.
// If string1 == string2 then you would get 0(zero) when you use this function for compare strings.

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20] = "BeginnersBook";
    char s2[20] = "BeginnersBook.COM";
    if (strcmp(s1, s2) == 0)
    {
        printf("string 1 and string 2 are equal");
    }
    else
    {
        printf("string 1 and 2 are different");
    }
    return 0;
}