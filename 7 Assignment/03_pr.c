/**
 * @file 03_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @problem statement :- Write a program which accepts number from the user and return the count of digits in between 3 & 7
 *
 */

#include <stdio.h>

int CountRange(int);

int main()
{

    int iVal = 0, iRet = 0;

    printf("Enter number :-\n");
    scanf("%d", &iVal);
    if (iVal < 0)
    {
        iVal = -(iVal);
    }

    iRet = CountRange(iVal);

    if (iRet > 0)
    {
        printf("The number %d contains %d number/s in range of 3 to 7.\n", iVal, iRet);
    }
    else
    {
        printf("The number %d does not contains any number/s in range of 3 to 7.\n", iVal);
    }

    return 0;
}

int CountRange(int iNum)
{
    int iCnt = 0, remainder = 0;
    while (iNum != 0)
    {
        remainder = iNum%10;
        if(remainder>3 && remainder<7)
        {
            iCnt++;
        }
        iNum = iNum/10;
    }
    return iCnt;
}