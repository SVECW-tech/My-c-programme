#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c,d,result,r1,r2;
 printf("write values of a,b,c");
  scanf("%f %f %f",&a,&b,&c);  
  d=b*b-4*a*c;
  printf("\n%f is d",d);
  result =sqrt(d);
  printf("%f is sqrt(d)",result);
  r1=(-b+result)/(2*a);
 r2=(-b-result)/(2*a);
  printf("r1 is %f and r2 is %f",r1, r2);
  }