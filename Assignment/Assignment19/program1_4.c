#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[] , int iLenght)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt< iLenght ; iCnt++)
    {
       if(Arr[iCnt]%3 ==0 && Arr[iCnt]%5==0)
       {
          printf("%d ",Arr[iCnt]);
       }
    }
}
   
int main()
{
    int iSize = 0 ,  iCnt =0;
    int *p = NULL;
    int iRet = 0;

    printf("Enetr number of elements \n");
    scanf("%d",&iSize);
    p =(int*)malloc(iSize*sizeof(int));

    if(p== NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
   
    Display(p ,iSize);
    free(p);
    return 0;
}
                            