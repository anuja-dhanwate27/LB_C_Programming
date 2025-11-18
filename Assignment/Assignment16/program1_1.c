#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iFrequency = 0;
    for(iCnt = 0 ; iCnt< iLenght ; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iSize = 0 , iRet = 0, iCnt =0;
    int *p = NULL;

    printf("Enetr number of elements \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p== NULL)
    {
        printf("Unable to allocate memory ");
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p ,iSize);

    printf("Result is %d",iRet);
    free(p);
    return 0;
}
                            