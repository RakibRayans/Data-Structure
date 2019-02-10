#include<stdio.h>
int main()
{
    int N,K,i,j,FIRST,SECOND,LOC1,LOC2,temp;
    printf("enter how many number you want to entered:");
    scanf("%d",&N);
    int DATA[N];
    for(i=1;i<=N;i++)
        scanf("%d",&DATA[i]);
    FIRST=DATA[1],LOC1=1,SECOND=DATA[2],LOC2=2;

    if(FIRST<SECOND)
    {
        temp=FIRST;
        FIRST=SECOND;
        SECOND=temp;
    }
    for(K=3;K<=N;K++)
    {
        if(FIRST<DATA[K])
        {
            SECOND=FIRST;
            FIRST=DATA[K];
            LOC2=LOC1;
            LOC1=K;
        }
        else if(SECOND<DATA[K])
        {
            SECOND=DATA[K],LOC2=K;
        }
        else
            ;
    }
    printf("Largest = %d,Location1 = %d\nSecond Largest = %d,Location2 = %d\n",FIRST,LOC1,SECOND,LOC2);
    return 0;
}
