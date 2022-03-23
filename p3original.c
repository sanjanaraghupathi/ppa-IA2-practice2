#include<stdio.h>
int input_number()
{
  int a;
  printf("enter a number");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  int count=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
        count=count+1;
    }
  if(count>2)
  {
    return 1;
  }
  else
  {
    return 2;
  }
}
void output(int n, int composite)
{
  if(composite==1)
  {
    printf("%d is a composite number\n",n);
  }
  if(composite==2)
  {
     printf("%d is not a composite number\n",n);
  }
}
int main()
{
  int n,c;
  n=input_number();
  c=is_composite(n);
  output(n,c);
  return 0;
}