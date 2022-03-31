#include<stdio.h>
int input()
{
 int a;
 printf("enter the number:");
 scanf("%d", &a);
 return a;
}
int compare(int a, int b, int c)
{
 if(a>b)
 {
 if(a>c)
 {
 return a;
 }
 else
 {
 return c;
 }
}
else
{
 if(b>c)
 {
 return b;
 }
 else
 {
 return c;
 }
}
}
void output(int largest)
{
 printf("The largest number is:%d\n",largest);
}
int main()
{
 int x,y,z,largest;
  x=input();
 y=input();
 z=input();
 largest=compare(x, y, z);
 output(largest);
 printf("End of code");
 return 0;
}