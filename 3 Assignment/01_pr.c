/**
 * @file 01_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-16
 *
 * @problem statement :- Write a program which accepts one number from the user and print that
 *                       number of even numbers on screen
 *
 */

#include <stdio.h>

void DisplayEven(int);

int main()
{
    int iValue = 0;
    printf("Enter number :-\n");
    scanf("%d", &iValue);

    DisplayEven(iValue);

    return 0;
}

void DisplayEven(int iNum)
{
    int iCnt = 1;
    int i = 0;
    if (iNum <= 0)
    {
        return;
    }

    while (i < iNum)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
            i++;
        }
        iCnt++;
    }
}