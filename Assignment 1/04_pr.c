/**
 * @file 04_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-14
 * 
 * @problem statement :- Accept one number and check it is divisible by 5 or not
 * 
 */

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int num)
{
    if(num%5==0)
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

    int iVal = 0;
    BOOL bRet = FALSE;
    printf("ENter the number :-\n");
    scanf("%d",&iVal);

    bRet = check(iVal);

    if (bRet==TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }
    
    return 0;
}