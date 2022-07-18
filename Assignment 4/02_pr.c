/**
 * @file 02_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @problem statement :-  Write a program which accepts number from the user and display its factors in decreasing order
 *
 */

#include <stdio.h>

void DisplayFact(int);

int main()
{
    int iVal = 0;
    printf("Enter the number :-\n");
    scanf("%d", &iVal);

    DisplayFact(iVal);

    return 0;
}

void DisplayFact(int iNum)
{
    int iCnt = iNum / 2;
    while (iCnt > 0)
    {
        if (iNum % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
        iCnt--;
    }
}