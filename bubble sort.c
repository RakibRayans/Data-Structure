#include<stdio.h>
int main()
{
    int N,K,i,ptr,temp;
    printf("enter how many number you want to entered:");
    scanf("%d",&N);
    int DATA[N];
    for(i=1;i<=N;i++)
        scanf("%d",&DATA[i]);
    for(K=1;K<N;K++)
    {
        ptr=1;
        while(ptr<=N-K)
        {
            if(DATA[ptr]>DATA[ptr+1])
            {
                temp=DATA[ptr];
                DATA[ptr]=DATA[ptr+1];
                DATA[ptr+1]=temp;
            }
            ptr+=1;
        }
    }
    printf("array after sorting:\n");
    for(i=1;i<=N;i++)
        printf("%d ",DATA[i]);
    return 0;
}
