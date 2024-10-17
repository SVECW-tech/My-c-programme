#include<stdio.h>
void main()
{
 int i,x,y,a,b;
 printf("enter range(x,y): ");
  scanf("%d%d",&x,&y);  
  printf("enter divisors(a,b):");
  scanf("%d%d",&a,&b);
  printf("numbers divisible by %d and %d\n",a,b);
  for( i=x;i<=y;i++)
  {
  if(i%a==0 && i%b==0)
  {
  printf("%d\n",i);
}}
}