/*******************************************************************************
* 
* Description: A basic calculator app.
*
* Author: Oussama el-figha
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    double firstNum;
    double secondNum;
    printf("Enter the first number: \n");
    scanf("%lf",&firstNum);
    
    printf("Enter the second number: \n");
    scanf("%lf",&secondNum);

    printf("The addition is : %lf\n", firstNum+secondNum);
    printf("The substraction is : %lf\n", firstNum-secondNum);
    printf("The multiplication is : %lf\n", firstNum*secondNum);
    printf("The division is : %lf\n", firstNum/secondNum);


    return 0;
}
