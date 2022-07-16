/**
 * @file 01_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-16
 *
 * @problem statement :- Accept one number from the user and print that number of * on
 *                       screen
 *
 */

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf(" * ");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter number :-\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}