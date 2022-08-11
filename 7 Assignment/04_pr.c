/**
 * @file 04_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @problem statement :- Write a program which accepts number from the user and return multiplication of all non-zero digits
 *
 */

#include <stdio.h>

int MultDigits(int);

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter number :-\n");
    scanf("%d", &iVal);
    if (iVal < 0)
    {
        iVal = -(iVal);
    }

    iRet = MultDigits(iVal);

    printf("The multiplication of all digits of %d is %d.\n", iVal, iRet);

    return 0;
}

int MultDigits(int iNum)
{
    int remainder = 0, mult = 1;

    while (iNum != 0)
    {
        remainder = iNum % 10;
        if(remainder>0)
        {
            mult = remainder * mult;
        }
        iNum = iNum / 10;
    }
    return mult;
}