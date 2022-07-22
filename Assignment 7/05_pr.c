/**
 * @file 05_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @problem statement :- Write a program which accepts number from the user and return difference between summation of even digits and summation of odd digits
 *
 */

#include <stdio.h>

int countDiff(int);

int main()
{

    int iVal = 0, iRet = 0;

    printf("Enter number :-\n");
    scanf("%d", &iVal);
    if (iVal < 0)
    {
        iVal = -(iVal);
    }

    iRet = countDiff(iVal);

    printf("Difference between summation of even and of odd digits of number %d is :-\n%d.\n", iVal, iRet);
    return 0;
}

int countDiff(int iNum)
{
    int remainder = 0, evenSum = 0, oddSum = 0, diff = 0;

    while (iNum != 0)
    {
        remainder = iNum % 10;
        if (remainder % 2 == 0)
        {
            evenSum = evenSum + remainder;
        }
        else
        {
            oddSum = oddSum + remainder;
        }
        iNum = iNum / 10;
    }
    diff = evenSum - oddSum;
    return diff;
}