#include<stdio.h>

int FirstChar(char *str , char ch)
{
    
    int iCnt =0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
             
            
        }
        iCnt++;
       
        str++;
        
        
    }
    return -1;

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



    iRet=FirstChar(arr , cValue);

    printf("Character locatin :  %d ",iRet);
   

     return 0;
}