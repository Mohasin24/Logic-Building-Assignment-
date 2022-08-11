/**
 * @file 04_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-16
 *
 * @problem statement :- Accept one character from the user and convert case of that character
 * Hint :- Use ascii values
 */

#include <stdio.h>
#include <ctype.h>

void DisplayChar(char);

int main()
{

    char cVal = '\0';
    printf("Enter character :-\n");
    scanf("%c", &cVal);

    DisplayChar(cVal);

    return 0;
}

void DisplayChar(char cVal)
{
    if (cVal >= 'A' && cVal <= 'Z')
    {
        printf("%c\n", tolower(cVal));
    }
    else if (cVal >= 'a' && cVal <= 'z')
    {
        printf("%c\n", toupper(cVal));
    }
}
// void DisplayChar(char cVal)
// {
//     if(cVal>='A'&&cVal<='Z')
//     {
//         printf("%c\n",(cVal+32));
//     }
//     else if(cVal>='a'&&cVal<='z')
//     {
//         printf("%c\n",(cVal-32));
//     }
// }
