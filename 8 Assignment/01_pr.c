/**
 * @file 01_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-19
 *
 * @problem statement :- Accept N numbers from user and return difference between summation of even elements and summation of odd elements
 * use dynamic memory allocation
 */

#include <stdio.h>
#include <stdlib.h>

void setData(int *, int);
int sumDiff(int *, int);
int main()
{

    int iSize = 0, iRet = 0;

    int *Ptr = NULL;

    printf("Enter the number :-\n");
    scanf("%d", &iSize);

    Ptr = (int *)calloc(iSize, sizeof(int));

    setData(Ptr, iSize);
    iRet = sumDiff(Ptr, iSize);
    printf("Result = %d\n", iRet);

    free(Ptr);

    return 0;
}

void setData(int *P, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter no. %d element :-\n", (i + 1));
        scanf("%d", &P[i]);
    }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Element no. %d = %d.\n",(i+1),P[i]);

    // }
}

int sumDiff(int *P, int size)
{
    int evenSum = 0, oddSum = 0, Diff = 0;

    for (int i = 0; i < size; i++)
    {
        if (P[i] % 2 == 0)
        {
            evenSum = evenSum + P[i];
        }
        else
        {
            oddSum = oddSum + P[i];
        }
    }

    Diff = evenSum - oddSum;
    return Diff;
}