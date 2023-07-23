#include<stdio.h>
void find_max_min(int a[],int n,int *min,int *max)
{
    *max=a[0];
    *min=a[0];
    for(int i=1;i<n;i++)
    {
        
         if(*min>a[i])
        {
            *min=a[i];
        }
        else if(*max<a[i])
        {
            *max=a[i];
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);

    }
    int min,max;
    find_max_min(a,n,&min,&max);
    printf("%d %d",min,max);


    return 0;
}