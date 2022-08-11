/**
 * @file 01_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-18
 * 
 * @problem statement :- Write a program which accept number from the user and display its digits in reverse order.
 *  
 * 
 */

#include<stdio.h>

void DisplayReverse(int);

int main()
{
    int iVal = 0;
    printf("Enter the number :-\n");
    scanf("%d",&iVal);
    DisplayReverse(iVal);
    return 0;
}

void DisplayReverse(int iNum)
{
    int remainder = 0;
    
    while (iNum!=0)
    {   
        
        remainder = iNum%10;
        printf("%d\n",remainder);
        iNum = iNum/10;
    }
    
}