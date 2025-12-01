#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef  bool BOOL;

BOOL ChkVowel(char *str)
{
   
   while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o'|| *str == 'u'||*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O'||*str=='U')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        str++;
        
    }
    
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contain vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}