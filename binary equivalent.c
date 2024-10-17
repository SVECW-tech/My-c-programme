#include<stdio.h>
void main()
{
int num,bin=0,rem=0,sum =1;
printf("enter decimal number");
scanf("%d",&num);
while(num)
{
rem=num%2;
num=num/2;
bin=bin+(rem*sum);
sum=sum*10;
}
printf("%d\n",bin);
}