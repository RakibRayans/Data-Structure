#include<stdio.h>
int main()
{
    int N,K,ITEM,i,J;
    printf("enter hoow many number you want to entered:");
    scanf("%d",&N);
    int LA[N];
    for(i=1;i<=N;i++)
        scanf("%d",&LA[i]);
    J=N;
    printf("enter the element to be inserted in the array:");
    scanf("%d",&ITEM);
    printf("enter the location in which %d is to be inserted:",ITEM);
    scanf("%d",&K);
    while(J>=K)
    {
        LA[J+1]=LA[J];
        J--;
    }
    LA[K]=ITEM;
    N=N+1;
    printf("the updated array is:\n");
    for(i=1;i<=N;i++)
        printf("%d ",LA[i]);
    return 0;
}
