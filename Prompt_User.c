/*******************************************************************************
* 
* Description: Examples of using prompt user.
*
* Author: Oussama el-figha
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//to prompt user to enter something

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nthe users age is : %d years old\n", age);
    
    //for doubles
    double gpa;
    printf("Enter your GPA: ");
    scanf("%lf",&gpa);
    printf("\nthe user gpa is: %f\n", gpa);


    //for strings 
    //make attention it only grabs the first word
    char description[]="";
    printf("Enter your description: ");
    scanf("%s",&description);
    printf("\nthe description of the user is : %s\n", description);


    //this one grabs the whole line entred by user
    char fullName[20];
    printf("Enter your full name: ");
    fgets(fullName, sizeof fullName, stdin); // the variable + the maximum of charachter tha the user can enter + stdin(standard input) 
    printf("\nthe full name of user is: %s", fullName);


    //issue number 1:
    //if i add a \n at the end of my last printf it doesn't work 
    return 0;
}
