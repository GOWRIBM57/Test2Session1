#include<stdio.h>
 int input_array_size()
{
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
}
void input_array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      a[i]=i;
      a[1]=0;
    }
}
void ets(int n,int a[n])
{
 int i=0;
  while(i<sqrt(n))
    {
     while(a[i]==0)i++;
      for(int k=i+i;i<n;k+=i)
        a[k]=0;
      i++;
    }
}
void display(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
        printf("%d",a[i]);
      printf("\n");
    }
}
int main()
{
  int i,n;
  n=input_array_size();
  input_array(n,a[n]);
  ets(n,a[n]);
  display(n,a[n]);
  return 0;
}