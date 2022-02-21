#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1)
{
  printf("Enter the numbers:");
  scanf("%f %f",x1,y1);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int triangle,a,b,c,s;
  a=sqrt(x2-x1)+(y2-y1);
  b=sqrt(x3-x2)+(y3-y2);
  c=sqrt(x3-x1)+(y3-y1);
  s=(a+b+c)/2;
  triangle=sqrt(s*(s-a)*(s-b)*(s-c));
  return triangle;
}

void output(float x1,float y1,float x2,float y2,float x3,float y3,int triangle)
{
  if(triangle==0)
  {
    printf("These lines does not form triangle");
  }
  else
  {
  printf("These lines form triangle");
  }
}

int main()
{
  float x1,x2,x3,y1,y2,y3;
  int triangle;
  input(&x1,&y1);
  input(&x2,&y2);
  input(&x3,&y3);
  triangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,triangle);
  return 0;
}