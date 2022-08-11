/**
 * @file 04_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-22
 * 
 * @problem statement :- Accept N number from user and return frequency of 11 from it.
 * 
 */

#include<stdio.h>

int acceptElmnt(int *,int);

int main()
{

    int N = 0, iRet = 0;
    printf("Enter number :-\n");
    scanf("%d",&N);
    int Arr[N];
    iRet = acceptElmnt(Arr,N);
    printf("Frequency of 11 is %d times.\n",iRet);
    return 0;
}

int acceptElmnt(int *Ptr,int size)
{
    int iCnt = 0;
    for (int i = 0; i < size; i++)
    {
        printf("Enter element no. %d :-\n",(i+1));
        scanf("%d",&Ptr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(Ptr[i]==11)
        {
            iCnt++;
        }
    }
    return iCnt;
}