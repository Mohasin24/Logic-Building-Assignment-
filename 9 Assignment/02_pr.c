/**
 * @file 02_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-22
 * 
 * @problem statement :-Accept N number from user and return difference between frequency of even numbers and odd numbers.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
void acceptNum(int[], int);
int freqEven(int[], int);
int main()
{

    int N = 0, iRet = 0;
    int *Ptr = NULL;
    printf("Enter a number :-\n");
    scanf("%d", &N);

    Ptr = (int *)calloc(N, sizeof(int));
    if (Ptr == NULL)
    {
        printf("Unable to allocate the memory.\n");
    }
    else
    {
        printf("Memory alloaceted successfully.\n");
        acceptNum(Ptr, N);
        iRet = freqEven(Ptr,N);

        printf("The difference between frequency of even numbers and odd numbers is : %d.\n",iRet);
    }

    free(Ptr);
    return 0;
}

void acceptNum(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Element no. %d :-\n", (i + 1));
        scanf("%d", &Arr[i]);
    }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Element no. %d := %d\n",(i+1),Arr[i]);

    // }
}

int freqEven(int Arr[], int size)
{   
    int evenCnt = 0,oddCnt = 0,Ans = 0;
  
    for(int i = 0; i<size; i++)
    {
        if (Arr[i]%2==0)
        {
            evenCnt++;
        }
        else
        {
            oddCnt++;
        }
    }

    Ans = evenCnt - oddCnt;
    return Ans;
}
