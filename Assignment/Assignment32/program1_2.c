#include<stdio.h>

void StrCpyX(char *str , char *dest)
{

   while(*str != '\0')
   {
        if(*str != ' ')
        {
            
            *dest = *str;
            dest++;
             
        }
        str++;
    } 
    *dest = '\0';

  

}

int main()
{
    char arr[30] = "Marvel  lous pyth  on";
    char brr[30];

    StrCpyX(arr,brr);


    printf("%s",brr);
    
    return 0;
}