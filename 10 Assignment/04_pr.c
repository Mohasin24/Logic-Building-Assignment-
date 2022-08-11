/**
 * @file 04_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-08-06
 * 
 * @problem statement :- Accept N number from user and accept range and display only elements from that range
 * 
 */
#include<stdio.h>
#include<stdlib.h>

void display(int *, int, int,int);

int main()
{
    int iSize = 0, iStart = 0, iEnd = 0;
    int *Ptr = NULL;

    printf("Enter numebr :=  ");
    scanf("%d",&iSize);

    printf("Enter start :=  ");
    scanf("%d",&iStart);

    printf("Enter end :=  ");
    scanf("%d",&iEnd);

    Ptr = (int*)malloc(sizeof(int)*iSize);
    
    display(Ptr,iSize,iStart,iEnd);

    return 0;
}

void display(int *Ptr, int iSize, int iStart, int iEnd)
{
    for (int i = 0; i < iSize; i++)
    {   
        printf("Enter element no. %d :=  ",(i+1));
        scanf("%d",&Ptr[i]);
    }

    for(int i = 0; i<iSize; i++)
    {
        if (Ptr[i]>=iStart && Ptr[i]<=iEnd)
        {
            printf("%d  ",Ptr[i]);
        }
        
    }
    
}