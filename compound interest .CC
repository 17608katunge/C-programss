//c program to calculate compound intererst
#include<stdio.h>
#include<math.h>
int main()
{
float amount,principal,rate,time,CI;
printf("Enter the values of time, rate and amount:");
scanf("%f%f%f",&time,&rate,&amount);
CI=amount-principal;
printf("compound interest:%f",CI);
return 0;
  }