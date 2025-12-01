#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int CountCapital = 0 , CountSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str<= 'z')
        {
            CountSmall++;
           
        }
        else if(*str >= 'A' && *str<= 'Z')
        {
            CountCapital++;
        }
        str++;
    }
    return (CountSmall-CountCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d",iRet);

    return 0;
}