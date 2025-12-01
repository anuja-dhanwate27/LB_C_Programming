#include<stdio.h>


void Display(char ch)
{
    char Count = '\0';
    if(ch>='A' && ch<='Z')
    {
        for(Count = ch ; Count <= 'Z' ; Count++ )
        {
            printf("%c\t",Count);
            

        }

        
       
    }
    else if(ch >='a' && ch<= 'z')
    {
        for(Count = ch ; Count >= 'a' ; Count--)
        {
            printf("%c\t",Count);
            

        }
        
      
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
