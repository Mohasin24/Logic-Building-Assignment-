/**
 * @file 05_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-18
 *
 * @problem statement :- Write a program which accept number from the user and count frequency of such digits which are less than 6
 *
 */

#include <stdio.h>
void checkNum(int);
int main()
{
    int iVal = 0;
    printf("Enter the number :-\n");
    scanf("%d", &iVal);

    checkNum(iVal);

    return 0;
}

void checkNum(int iNum)
{
    int originalNum = iNum, remainder = 0, iCnt = 0;

    while (iNum != 0)
    {
        remainder = iNum % 10;
        iNum = iNum / 10;

        if (remainder < 6)
        {
            printf("%d ", remainder);
            iCnt++;
        }
    }
    printf("\n");
    if (iCnt != 0)
    {
        printf("The number %d conatains %d numbers which are less than 6.\n", originalNum, iCnt);
    }
    else
    {
        printf("There is zero number in %d which are less than 6.\n", originalNum);
    }
}