#include<stdio.h>
void seq(int x)
{
   
    for(int i=1;i<=x;i++)
    {
        printf("%d",i);
        if(i!=x)
        {
            printf(" ");
        }
    }

}
int main()
{
    int a;
    scanf("%d",&a);
    seq(a);


    return 0;
}