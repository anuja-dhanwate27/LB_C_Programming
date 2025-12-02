#include<stdio.h>

int CountChar(char *str , char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        return iCount;
    }

}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);



    printf("Enter the character : \n");
    scanf(" %c",&cValue);



    iRet=CountChar(arr , cValue);

    printf("Character frewuwncy is %d ",iRet);
   

     return 0;
}