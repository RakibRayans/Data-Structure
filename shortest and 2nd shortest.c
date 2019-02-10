#include<stdio.h>
int main()
{
    int i,FIRST,SECOND,LOC1,LOC2,K,N,temp;
    printf("how many number you want to entered:");
    scanf("%d",&N);
    int DATA[N];
    for(i=1;i<=N;i++)
        scanf("%d",&DATA[i]);
    FIRST=DATA[1],SECOND=DATA[2],LOC1=1,LOC2=2;
    if(FIRST>SECOND)
    {
        temp=FIRST;
        FIRST=SECOND;
        SECOND=temp;
        LOC1=2,LOC2=1;
    }
    for(K=3;K<=N;K++)
    {
        if(FIRST>DATA[K])
        {
            SECOND=FIRST;
            FIRST=DATA[K];
            LOC2=LOC1;
            LOC1=K;
        }
        else if(SECOND>DATA[K])
        {
            SECOND=DATA[K];
            LOC2=K;
        }

    }
    printf("Shortest = %d\tlocation = %d\nsecond shortest = %d\tlocation = %d\n",FIRST,LOC1,SECOND,LOC2);
    return 0;
}
