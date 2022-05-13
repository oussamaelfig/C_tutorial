/*******************************************************************************
* 
* Description: Arrays in C
*
* Author: Oussama el-figha
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    //To declare an Array ==> dataType arrayName[arraySize];
int data[100];

//Here, we declared an array, mark, of floating-point type. And its size is 5.
// Meaning, it can hold 5 floating-point values.
float mark1[5];


//To initialize an array:
int mark2[5] = {19, 10, 8, 17, 9};

//Other way:

int mark3[] = {19, 10, 8, 17, 9};

//Here, we haven't specified the size. However, the compiler knows its size 
//is 5 as we are initializing it with 5 elements.

int arrayOfElements[5] = {19, 10, 8, 17, 9};

// make the value of the third element to -1
arrayOfElements[2] = -1;

// make the value of the fifth element to 0
arrayOfElements[4] = 0;


printf("%s","Enter a number : ");

// take input and store it in the 3rd element
scanf("%d", &arrayOfElements[2]);

// take input and store it in the ith element
//scanf("%d", &arrayOfElements[i-1]);



//Display elements of list ****************************************
int length = sizeof(arrayOfElements)/sizeof(arrayOfElements[0]);    

   printf("Elements of given array: \n");    
    //Loop through the array by incrementing value of i     
    for (int i = 0; i < length; i++) {     
        printf("%d ", arrayOfElements[i]);     
    }      
//*****************************************************************



    return 0;
}
