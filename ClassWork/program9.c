/*
   Step1 : understand the problem statement
   Step2 : write the aloritham
   Step3 : decide the programming language
   Step4 : write the program
   Step5 : test the program

*/
/*
Aloritham 
  

     START
           Accept first number as no1
           Accept second number as no2
           if the input is negative then convert it into positive
           perform addition of no1 and no2
           display the addition on screen

     STOP



*/

#include<stdio.h>
float AdditionTowNumbers(float fNo1 , float fNo2)
{
    float fSum = 0.0f;
    // updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2; //Business logic 
    return fSum;
}
int main()
{
    float fValue1 = 0.0f ,fValue2 = 0.0f, fRet = 0.0f;
    printf("Enter first number :\n");
    scanf("%f",&fValue1);
    printf("Enter second number :\n");
    scanf("%f",&fValue2);
    
    
    fRet = AdditionTowNumbers(fValue1,fValue2);
    printf("Addition is : %f \n",fRet);

    return 0;
}