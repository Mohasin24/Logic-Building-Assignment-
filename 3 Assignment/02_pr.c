/**
 * @file 02_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-16
 *
 * @problem statement :- Write a program which accepts number from the user and print even factors of
 *                       that number .
 *
 */

#include <stdio.h>

void displayFactor(int);

int main()
{

    int iVal = 0;
    printf("Enter number :-\n");
    scanf("%d", &iVal);

    displayFactor(iVal);

    return 0;
}

void displayFactor(int iNum)
{
    int iCnt = 1;

    if (iNum<0)
    {
        iNum = -(iNum);
    }
    
    while (iCnt <= iNum)
    {
        if (iNum % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
        iCnt++;
    }
}