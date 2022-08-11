/**
 * @file 04_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @problem statement :- Write a program which accepts number from the user and return summation of all its non factors
 *
 */

#include <stdio.h>

int DisplayNonFactSum(int);

int main()
{
    int iVal = 0, iRet = 0;
    printf("Enter the number :-\n");
    scanf("%d", &iVal);

    iRet = DisplayNonFactSum(iVal);
    printf("The summation of all factors of %d is %d.\n", iVal, iRet);

    return 0;
}

int DisplayNonFactSum(int iNum)
{
    int iSum = 0;
    for (int i = 1; i < iNum; i++)
    {
        if (iNum % i != 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}