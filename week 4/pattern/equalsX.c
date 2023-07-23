#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    int a[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
             if(sum==x)
        {
           flag=1;
        }
       
        }
   

 }
    if(flag=1)   
        {
            printf("YES\n");
        }
    else
    {
        printf("NO\n");
    }

    

    return 0;
}