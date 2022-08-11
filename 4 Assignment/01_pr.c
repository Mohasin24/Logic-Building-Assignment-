/**
 * @file 01_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @problem statement :- Write a program which accepts number from user and display its multiplication of factors
 *
 */

#include <stdio.h>

int factDisplayMulti(int);

int main()
{
    int iVal = 0, iRet = 0;
    printf("Enter the number :-\n");
    scanf("%d", &iVal);

    iRet = factDisplayMulti(iVal);

    printf("Multiplication of factors of %d is %d.\n", iVal, iRet);
    return 0;
}

int factDisplayMulti(int iNum)
{
    int Mul = 1;
    for (int i = 1; i < iNum; i++)
    {
        if (iNum % i == 0)
        {
            Mul = Mul * i;
        }
    }
    return Mul;
}