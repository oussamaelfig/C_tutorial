// To do celare a string
// Method 1:
char address[] = {'T', 'E', 'X', 'A', 'S', '\0'};

// Method 2:
char address[] = "TEXAS";
// In the above declaration NULL character (\0)
//  will automatically be inserted at the end of the string.

// What is NULL Char “\0”?
// '\0' represents the end of the string. It is also referred as String terminator & Null Character.

#include <stdio.h>
#include <string.h>
int main()
{
    /* String Declaration*/
    char nickname[20];

    printf("Enter your Nick name:");

    /* I am reading the input string and storing it in nickname
     * Array name alone works as a base address of array so
     * we can use nickname instead of &nickname here
     */
    scanf("%s", nickname);

    /*Displaying String*/
    printf("%s", nickname);

    return 0;
}
 
//%s format specifier is used for strings input/output