
#include <stdio.h>
int main()
{
int n,rev=0,pal,rem;
printf("enter n value");
scanf("%d",&n);
pal=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(pal==rev)
printf("%d is palindrome number",pal);
else
printf("%d not a palindrome number",pal);
return 0;
}