/**
 * @file 03_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-22
 * 
 * @problem statement :- Accept N number from user and check whether that number contains 11 or in it or not.
 * 
 */

#include<stdio.h>

void acceptElmnt(int *,int);

int main()
{

    int N = 0;
    printf("Enter number :-\n");
    scanf("%d",&N);
    int Arr[N];
    acceptElmnt(Arr,N);
    return 0;
}

void acceptElmnt(int *Ptr,int size)
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
    if(iCnt>0)
    {
        printf("Given numbers conatains 11, %d no. of times.\n",iCnt);
    }
    else
    {
        printf("Given numbers does not conatains 11.\n");
    }
    
}