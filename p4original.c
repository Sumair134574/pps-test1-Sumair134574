#include<stdio.h>
int compare(int a,int b,int c)
{
  int l;
  if(a>b && a>c)
  printf("A is big\n");
  else if(b>a && b>c)
  printf("B is big\n");
  else if(c>a && c>b)
  printf("C is big\n");
}
int input()
{
  int a;
  printf("enter the number\n");
  scanf("%d" , &a);
  return a;
}
void output(int l)
{
  printf("big number is: %d\n",l);
}
int main()
{
  int a,b,c,l;
  a=input();
  b=input();
  c=input();
  l=compare(a,b,c);
  output(l);
  return 0;
}