#include<stdio.h>
int main()
{
    int N,K,ITEM,J,i;
    printf("enter how many number you want to entered:");
    scanf("%d",&N);
    int LA[N];
    for(i=1;i<=N;i++)
        scanf("%d",&LA[i]);
    printf("enter the location from where element is to be deleted:");
    scanf("%d",&K);
    for(J=K;J<N;J++)
    {
        LA[J]=LA[J+1];
    }
    N=N-1;
    printf("array after deleted:\n");
    for(i=1;i<=N;i++)
        printf("%d\n",LA[i]);
    return 0;
}
