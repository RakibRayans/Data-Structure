#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k;
    printf("enter 1st array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter 2nd array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("your entered matrices are:\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",A[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",B[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=0;
            for(k=0;k<3;k++)
            {
                C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
                printf("%7d",B[k][j]);
            }
        }
    }
    printf("\nResultant matrix is:\n\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",C[i][j]);
        }
    }
    return 0;

}
