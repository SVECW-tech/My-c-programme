#include<stdio.h>
void main()
{
 int num,rem,sum=0;
 printf("enter sum ");
  scanf("%d",&num);  
  sum=0;
  while (num>0)
  {
  rem=num%10;
  sum=sum+(rem*rem*rem);
  num=num/10;
  printf("sum=%d",sum);
  }}