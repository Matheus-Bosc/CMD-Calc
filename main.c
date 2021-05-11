#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int num1;
    int num2;
    char sign;
    int resultadd;
    int resultminus;
    int resultmultiply;
    int resultdivide;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("\nEnter Second Number: ");
    scanf("%d", &num2);

    printf("\nEnter Sign. E.g + - * : ");
    scanf(" %c", &sign);

    printf("Please verify the following information.\nFirst Number: %d \nSecond Number: %d \nSign: %c \nIf Correct Then ",num1,num2,sign);

    resultadd = num1 + num2;
    resultminus = num1 - num2;
    resultmultiply = num1 * num2;
    resultdivide = num1 / num2;


    if (sign == '+')
        printf("Your Result Is: %d", resultadd);

    else if (sign == '-')
        printf("Your Result Is: %d", resultminus);

    else if (sign == '*')
        printf("Your Result Is: %d", resultmultiply);

    else if (sign == '/')
        printf("Your Result Is: %d", resultdivide);

    else
        printf("Please Restart The Application And Use One Of The Following Signs: + * / -");

    Sleep(3000);


    return 0;
}
