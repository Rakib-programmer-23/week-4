/*[has return + parameter]
#include<stdio.h>
int sum(int x,int y)
{
    int s=x+y;
    return s;
}
int main()
{
    int ans=sum(10,20);
    printf("%d",ans);

    return 0;
}
*/

/*[has return + no parameter]
#include<stdio.h>
int sub()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a-b;
    return s;
}
int main()
{
    int s=sub();
    printf("%d",s);

    return 0;
}
*/
/*[no return + parameter]
#include<stdio.h>
void div(int x, int y)
{
    float div=x/y;
    printf("%f",div);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    div(a,b);

    return 0;
}
*/
/*[no return + no parameter]
#include<stdio.h>
void mult()
{
  int a,b,s;
  scanf("%d %d",&a,&b);
  s=a*b;
  printf("%d",s);
}
int main()
{
    
   mult();
    return 0;
}
*/
