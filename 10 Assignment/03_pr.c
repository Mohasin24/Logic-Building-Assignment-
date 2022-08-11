/**
 * @file 03_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-08-06
 *
 * @problem statement :- Accept N number from user and accept one another number as NO and return index of last occurance of that Number
 *
 */

#include <stdio.h>
#include <stdlib.h>

void acceptNum(int *, int);
int checkOccu(int *, int, int);

int *Ptr = NULL;

int main()
{
    int iSize = 0, NO = 0, iRet = 0;

    printf("Enter the size :=  ");
    scanf("%d", &iSize);

    Ptr = (int *)malloc(sizeof(int) * iSize);

    if (Ptr == NULL)
    {
        printf("Unable to allocate the memory.\n");
    }

    acceptNum(Ptr, iSize);

    printf("Enter number to find :=  ");
    scanf("%d", &NO);

    iRet = checkOccu(Ptr, iSize, NO);

    if (iRet == -1)
    {
        printf("The number %d is not present.\n", NO);
    }
    else
    {
        printf("The last occurance index of %d is %d.\n", NO, iRet);
    }

    return 0;
}

void acceptNum(int *P, int S)
{
    for (int i = 0; i < S; i++)
    {
        printf("Enter no. %d element :=  ", (i + 1));
        scanf("%d", &P[i]);
    }
}

int checkOccu(int *P, int S, int F)
{
    int iCheck = 0;
    int iCnt = 0;

    for (int i = 0; i < S; i++)
    {
        if (P[i] == F)
        {
            iCnt=i;
            iCheck = 1;
        }
    }

    if (iCheck == 0)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}