/*******************************************************************************
* 
* Description: Program to find the average of n numbers using arrays
* It still need some correction
*
* Author: Oussama el-figha
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main(int argc, char const *argv[]) {
    const int n = 10;
    int marks[n];

    for (int i = 0; i < n; i++) {
        printf("%s %d %s", "Enter the number at the indexe ", i, " : ");
        scanf("%d", &marks[i]);
    }

    printf("\n%s\n", "the list of numbers is : ");

    for (int i = 0; i < n; i++) {
        printf("%d,", marks[i]);
    }

    int somme = 0;

    for (int i = 0; i < n; i++) {
        somme = somme + marks[i];
    }

    printf("\n%s %d", "the average of this list is :", somme / n);


    return 0;
}
