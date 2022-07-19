/**
 * @file 02_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-18
 *
 * @problem statement :- Write a program which accept number from the user and check whether it contains '0' or not.
 *
 */

#include <stdio.h>
void checkZero(int);
int main()
{
    int iVal = 0;
    printf("Enter the number :-\n");
    scanf("%d", &iVal);

    checkZero(iVal);

    return 0;
}

void checkZero(int iNum)
{
    int originalNum = iNum, remainder = 0, iCnt = 0;

    while (iNum != 0)
    {
        remainder = iNum % 10;
        iNum = iNum / 10;

        if (remainder == 0)
        {
            iCnt++;
        }
    }
    if(iCnt!=0)
    {
        printf("The number %d conatains %d zero's.\n", originalNum, iCnt);
    }
    else
    {
        printf("There is no zero in %d.\n",originalNum);
    }
    
}