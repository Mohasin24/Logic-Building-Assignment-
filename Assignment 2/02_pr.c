/**
 * @file 02_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-16
 * 
 * @problem statement :- Accept one number from the user and print that number of * on
 *                       screen
 * 
 */

#include<stdio.h>

void Display(int iNo)
{
    while (iNo>0)
    {
        printf(" * ");
        iNo--;
    }
    
}

int main()
{

    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}