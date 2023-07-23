#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int K=N;
    for(int i=1;i<=N;i++ )
    {
        for (int j=1;j<=K;j++)
        {
            printf("*");
        }
        K--;
        printf("\n");
    }

    return 0;
}