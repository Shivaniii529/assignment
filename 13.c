#include<stdio.h>
int input()
{
 int a;
 printf("Enter the number\n");
 scanf("%d", &a);
 return a;
}
int add(int a, int b)
{
 int sum;
 sum = a + b;
 return sum;
}
void output(int a, int b, int sum)
{
 printf("sum of %d + %d is %d\n", a, b, sum);
}
int main()
{
 int x, y, z;
 x= input();
 y= input();
 z= add(x , y);
 output(x, y, z);
 return 0;
}