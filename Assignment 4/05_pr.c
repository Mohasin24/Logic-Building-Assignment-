/**
 * @file 05_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @problem statement :- Write a program which accepts number from the user and return difference between summation of all its factors and non factors
 *
 */

#include <stdio.h>

int DisplayDiff(int);

int main()
{
    int iVal = 0, iRet = 0;
    printf("Enter the number :-\n");
    scanf("%d", &iVal);

    iRet = DisplayDiff(iVal);
    printf("The difference between summation of all factors and non factors of %d is %d.\n", iVal, iRet);

    return 0;
}

int DisplayDiff(int iNum)
{
    int FactSum = 0;
    int NonFactSum = 0;
    int iAns = 0;
    for (int i = 1; i < iNum; i++)
    {
        if (iNum % i == 0)
        {
            FactSum = FactSum + i;
        }
        else
        {
            NonFactSum = NonFactSum + i;
        }
    }
    iAns = FactSum - NonFactSum;
    return iAns;
}