#include<stdio.h>
int main()
{
    int K,LOC,MIN,i,N;
    printf("how many number you want to entered:");
    scanf("%d",&N);
    int DATA[N];
    for(i=0;i<N;i++)
        scanf("%d",&DATA[i]);
    K=1,LOC=1,MIN=DATA[1];
    while(K<=N)
    {
        if(MIN>DATA[K])
        {
            LOC=K;
            MIN=DATA[K];
        }
        K+=1;
    }
    printf("shortest value=%d\nlocation=%d\n",MIN,LOC);
    return 0;
}
