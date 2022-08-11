/**
 * @file 01_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-08-06
 * 
 * @problem statement :- Accept N number from user and accept one another number as NO and check whether NO is present or not
 * 
 */

#include<stdio.h>
#include<windows.h>
#define TRUE 1
#define FALSE 0

void acceptNum(int [], int);
void checkNum(int [], int, int);

int main()
{
    int iNum = 0;
    int NO = 0;

    printf("Enter number :=  ");
    scanf("%d",&iNum);

    int Arr[iNum];

    acceptNum(Arr,iNum);

    printf("Enter a number to find :=  ");
    scanf("%d",&NO);

    checkNum(Arr,iNum,NO);  
    
    return 0;
}

void acceptNum(int Arr[],int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("Enter no. %d :=  ",(i+1));
        scanf("%d",&Arr[i]);
    }
    // system("cls");
}

void checkNum(int Arr[], int len, int F)
{   
    int check = FALSE;
    for (int i = 0; i < len; i++)
    {
        if (Arr[i]==F)
        {
            check=1;
        }
        
    }

    if (check==TRUE)
    {
        printf("Number %d is present.\n",F);
    }
    else
    {
        printf("Number %d is not present.\n",F);
    }
       
}
