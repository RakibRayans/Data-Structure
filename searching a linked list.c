#include<stdio.h>
int INFO[20];
int LINK[20];
int START;
int main()
{
    int PTR,ITEM,LOC;
    INFO[0]=22;INFO[2]=5;INFO[3]=19;INFO[5]=87;INFO[7]=29;INFO[8]=79;
    INFO[9]=33;INFO[11]=2;INFO[13]=50;INFO[14]=8;INFO[16]=55;INFO[18]=99;

    LINK[0]=3;LINK[2]=13;LINK[3]=2;LINK[5]=8;LINK[7]=14;LINK[8]=9;
    LINK[9]=18;LINK[11]=16;LINK[13]=5;LINK[14]=-1;LINK[16]=0;LINK[18]=7;
    START=11;

    PTR=START;
    printf("List:\n");

    while(PTR != -1)
    {
        printf("%d\t",INFO[PTR]);
        PTR=LINK[PTR];
    }
    printf("\nenter the item to be searched:");
    scanf("%d",&ITEM);

    PTR=START;
    while(PTR != -1)
    {
        if(ITEM == INFO[PTR]){
            LOC=PTR;
            break;
        }
        else
            PTR=LINK[PTR];
    }
    printf("item %d present at index location %d in the list\n",ITEM,LOC);
    return 0;
}
