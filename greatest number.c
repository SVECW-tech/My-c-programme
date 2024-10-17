
#include <stdio.h>
void main() {
int a,b,c,d;
 printf("Enter values");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b && b>c && c>a)
 {
printf("%d is max",a);
}
else if(b>a && b>c && b>d)
{
printf("%d is max",b);
}
else if(c>a && c>b && c>d)
{
printf("%d is max",c);
}else if(d>a && d>b && d>c)
{
printf("%d is max",d);
}}
