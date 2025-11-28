#include<stdio.h>

void strlwrX(char str[] )
{



    while(*str != '\0')
    {
        if((*str >= 'a' && *str <='b'))
        {
            *str = *str - 32;
            
        }
        str++;

        
    }
     
}
int main()
{
    char Arr[50] = {'\0'};
    
    
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    strlwrX(Arr);

    printf("Updated string is : %s\n",Arr);


    

   return 0;

}