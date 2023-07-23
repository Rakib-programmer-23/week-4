#include<stdio.h>
int sum(int x,int y)
{
  int cal=x+y;
  return cal;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
   
    printf("%d",sum(a,b));

    return 0;
}