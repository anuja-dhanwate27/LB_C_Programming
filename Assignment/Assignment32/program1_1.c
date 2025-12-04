#include<stdio.h>

void StrCpyRev(char *str , char *dest)
{

    char *start = str;
    while(*str != '\0')
    {
        str++;
       
    }
    str--;
   while(str >= start)
   {
      *dest = *str;
      dest++;
      str--;
   }

   *dest = '\0';

  

}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);


    printf("%s",brr);
    
    return 0;
}