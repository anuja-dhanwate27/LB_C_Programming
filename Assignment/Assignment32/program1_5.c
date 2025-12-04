#include<stdio.h>

void StrCpyToggle(char *str , char *dest)
{

   while(*str != '\0')
   {
        if(*str >='A' && *str <='Z')
        {
           *dest = *str + 32; 
            
             
        }
        else if(*str >='a' && *str <='z')
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

    StrCpyToggle(arr,brr);


    printf("%s",brr);
    
    return 0;
}