#include<stdio.h>


void Display(char ch)
{
    char Count = '\0';
    if(ch>='A' && ch<='Z')
    {
       printf("Decimal : %d\n",ch);
       printf("Octal : 0%o\n",ch);
       printf("Hexadecimal : 0X%X\n",ch);

    }
    else if(ch>='a' && ch<='z')
    {
       printf("Decimal : %d\n",(int)ch);
       printf("Octal : 0%o\n",(int)ch);
       printf("Decimal : 0X%X\n",(int)ch);

    }
}
int main()
{
    char cValue = '\0';
    printf("Enter the character \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;

}
