#include<stdio.h>
void input_string(char*a)
{
  printf("Enter the string:\n");
  scanf("%s",a);
}
int str_reverse(char*a)
{
  int i,m=0;
  for(i=0;a[i]!='\0';i++)
    m++;
  return m;
}
void output(char*a,char reverse_a)
{
  printf("The reverse of the string:\n");
  for(int i=reverse_a-1;i>=0;i--)
    printf("%c",a[i]);
}
int main()
{
  char a[100];
  input_string(a);
  int reverse_a;
  reverse_a = str_reverse(a);
  output(a,reverse_a);
  return 0;
}
