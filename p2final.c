#include <stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return 0;
}
int cmp(int a,int b,int c)
{
  int largest;
    if (a>b && a>c)
    largest=a;
    else if (b>c)
    largest=b;
    else
     largest=c;
  return largest;
}
void output(int a,int b,int c,int largest)
{
  largest= cmp(a,b,c);
  printf("%d is largest among the three",largest);
}
int main()
{
  int a,b,c,largest;
  printf("enter the no 1:");
  a=input();
  printf("enter the no 2:");
  b=input();
  printf("enter the no 3:");
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}