#include<stdio.h>
int main()
{
    int N,ITEM,LOC,i;
    printf("enter how many number you want to entered:");
    scanf("%d",&N);
    int DATA[N];
    for(i=1;i<=N;i++)
        scanf("%d",&DATA[i]);
    printf("enter the item to be searched:");
    scanf("%d",&ITEM);
    DATA[N+1]=ITEM;
    for(LOC=0;LOC<N+1;LOC++)
    {
        if(DATA[LOC]==ITEM)
            break;
    }
    if(LOC==N+1)
        printf("item is not present in the array.\n");
    else
        printf("the location of item in array: %d\n",LOC);
    return 0;
}
