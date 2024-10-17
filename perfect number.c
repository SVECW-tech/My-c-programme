#include<stdio.h>
void main()
{
 int i,n,s=0;
 printf("enter values");
  scanf("%d",&n);  
  for(i=1;i<n;i++)
  {
  if(n%i==0)
  {
  s=s+i;
}}
if(s==n)
printf("perfect number",n);
else
printf("not perfect number");
}