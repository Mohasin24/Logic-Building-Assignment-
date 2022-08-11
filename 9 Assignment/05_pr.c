/**
 * @file 05_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-22
 * 
 * @problem statement :- Accept N numbers from user and accept one another number as NO , return frequency of NO form it
 * 
 */

#include<stdio.h>
#include<stdlib.h>

int freqNum(int [], int, int);
void acceptElmnt(int [],int);

int main()
{
    int N = 0, NO = 0, iRet = 0;
    int *Ptr = NULL;
    printf("Enter Number Of Elements => ");
    scanf("%d",&N);
    printf("Enter Number To Find => ");
    scanf("%d",&NO);

    int Arr[N];
    acceptElmnt(Arr,N);
    iRet = freqNum(Arr,N,NO);

    printf("The frequency of occurance of %d is %d.\n",NO,iRet);

    return 0;
}
void acceptElmnt(int Arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter element no. %d :-\n",(i+1));
        scanf("%d",&Arr[i]);
    }
}
int freqNum(int Arr[],int size,int n)
{
    int iCnt = 0;
    for (int i = 0; i < size; i++)
    {
        if(Arr[i]==n)
        {
            iCnt++;
        }
    }
    return iCnt;
}
