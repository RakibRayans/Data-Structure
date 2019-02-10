#include<stdio.h>
int main()
{
    int N,K,i,LOC,MAX;
    printf("enter how many number you want to entered:");
    scanf("%d",&N);
    int DATA[N];
    for(i=0;i<N;i++)
        scanf("%d",&DATA[i]);
    LOC=0,MAX=DATA[0],K=0;
    while(K<N)
    {
        if(MAX<DATA[K])
        {
            MAX=DATA[K];
            LOC=K;
        }
        K+=1;
    }
    printf("Largest value is = %d\nLocation is = %d\n",MAX,LOC);
    return 0;
}
