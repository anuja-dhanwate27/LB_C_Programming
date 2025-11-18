#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iMax=0;
    for(iMax = Arr[0],iCnt = 0; iCnt< iLenght ; iCnt++)
    {
        if(Arr[iCnt]> iMax)
        {
            iMax = Arr[iCnt];
           
        }
    }
    return iMax;
   
   
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
   
    iRet = Maximum(p ,iSize);
    printf("Largest Number is  %d ",iRet);

    
    free(p);
    return 0;
}
                            