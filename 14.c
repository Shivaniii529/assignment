#include<stdio.h>
void input(int*a, int*b, int*c)
{
 printf("enter three numbers:");
 scanf("%d %d %d", a, b, c);
}
void compare(int a, int b, int c, int*l)
{
 if(a>b&&a>c)
 *l=a;
 else
 if(b>a&&b>c)
 *l=b;
 else
 if(c>a&&c>b)
 *l=c;
}
void output(int largest)
{
 printf("The largest number is:%d\n",largest);
}
int main()
{
 int a,b,c,largest;
 input(&a,&b,&c);
 compare(a,b,c,&largest);
 output(largest);
 return 0;
}
