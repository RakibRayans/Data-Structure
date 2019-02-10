#include<stdio.h>
int main()
{
    int i,k,N;
    printf("enter how many number you want to entered:");
    scanf("%d",&N);
    int LA[N];
    for(i=0;i<N;i++)
        scanf("%d",&LA[i]);
    k=0;
    while(k<N)
        k++;
    printf("array element after process:\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",LA[i]);
    }
    return 0;
}
