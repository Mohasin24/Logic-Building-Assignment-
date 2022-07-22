/**
 * @file 01_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @problem statement :- Write a program which accepts number from the user and return the count of even digits and display that digits.
 *
 *
 */

#include <stdio.h>

void CountEven(int);

int main()
{

    int iVal = 0;

    printf("Enter number :-\n");
    scanf("%d", &iVal);
    if (iVal < 0)
    {
        iVal = -(iVal);
    }

    CountEven(iVal);

    return 0;
};

void CountEven(int iNum)
{
    int remainder = 0, iCnt = 0, originalNum = iNum;
    int j = 0;
    int Arr[iCnt];

    while (iNum != 0)
    {
        remainder = iNum % 10;
        if (remainder % 2 == 0)
        {
            iCnt++;
            for (int i = j; i < iCnt; i++)
            {
                Arr[i] = remainder;
            }
            j++;
        }
        iNum = iNum / 10;
    }

    if (iCnt > 0)
    {
        printf("The number %d contains %d even digits.\nThe digits are as follow :-\n", originalNum, iCnt);
        for (int i = (iCnt - 1); i >= 0; i--)
        {
            printf("%d\n", Arr[i]);
        }
    }
    else
    {
        printf("The number %d does not contains any even digits.\n", originalNum);
    }
}
