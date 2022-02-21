#include<stdio.h>
#include<math.h>

void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter the x-coordinate number: \n");
  scanf("%f %f",x1,x2);
  printf("Enter the y-coordinate number: \n");
  scanf("%f %f",y1,y2);
}

void distance(float x1,float y1,float x2,float y2,float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void output(float x1,float y1,float x2,float y2,float area)
{
  printf("The distance between point (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,area);
}

int main()
{
  float x1,x2,y1,y2,area;
  input(&x1,&y1,&x2,&y2);
  distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}
