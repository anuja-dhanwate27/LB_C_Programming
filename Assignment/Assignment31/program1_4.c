#include<stdio.h>

int CountChar(char *str , char ch)
{
    int index = 0;
    int iCnt =0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            index = iCnt;
             
            
        }
        iCnt++;
       
        str++;
        
        
    }
    return index;

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

    printf("Character locatin :  %d ",iRet);
   

     return 0;
}