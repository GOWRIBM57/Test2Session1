 #include<stdio.h>
int input()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  return n;
}
int isprime(int n)
{
  int i;
  int flag=0;
  if(n==0)
  {
    flag=1;
  }
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag = 1;
      break;
    }
  }
}
void output(int n,int prime)
{
  int flag;
  if(flag==0)
  {
    printf("%d is a prime number",n);
  }
  else{
    printf("%d is not a prime number",n);
  }
}
int main()
{
  int i,n,flag,prime;
  n=input();
  flag=isprime(n);
   output(n,prime);
  return 0;
}


