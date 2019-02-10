#include<stdio.h>
int main()
{
    int N,BEG,END,MID,ITEM,LOC,i;
    printf("how many number you want to entered:");
    scanf("%d",&N);
    int DATA[N];
    for(i=1;i<=N;i++)
        scanf("%d",&DATA[i]);
    printf("enter the item to be searched:");
    scanf("%d",&ITEM);
    BEG=1,END=N,MID=((BEG+END)/2);
    while(BEG<=END && DATA[MID] != ITEM)
    {
        if(ITEM<DATA[MID])
            END=MID-1;
        else
            BEG=MID+1;
        MID=((BEG+END)/2);
    }
    if(DATA[MID]==ITEM){
        printf("Location of the item: %d\n",MID);
    }
    else
        printf("Item is not present in the array.\n");
    return 0;
}
