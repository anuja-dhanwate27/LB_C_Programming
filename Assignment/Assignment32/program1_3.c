#include<stdio.h>

void StrCpyCap(char *str , char *dest)
{

   while(*str != '\0')
   {
        if(*str >='a' && *str <='z')
        {
           *dest = *str - 32; 
            
             
        }
        else
        {
            *dest = *str;
        }
        dest++;
        str++;
    } 
    *dest = '\0';

  

}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyCap(arr,brr);


    printf("%s",brr);
    
    return 0;
}