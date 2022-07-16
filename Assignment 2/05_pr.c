/**
 * @file 05_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-16
 * 
 * @problem statement :- Accept a number from user and check whether the number is even
 *                       or odd
 * 
 */

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL checkEven(int num)
{
    if(num%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number :-\n");
    scanf("%d",&iValue);

    bRet = checkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    

    return 0;
}