
#include <stdio.h>
void main() {
int i,n,s=0;
 printf("Enter value");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 if(n%i==0)
 {
 s++;
 }}
 if(s==2)
 {
printf("prime number");
}
else 
{
printf("not prime number");
}
}
