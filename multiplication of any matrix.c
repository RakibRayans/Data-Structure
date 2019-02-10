#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the order of matrix:");
    scanf("%d",&n);
    int A[n][n],B[n][n],C[n][n];
    printf("enter 1st matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    printf("enter the 2nd matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&B[i][j]);
    }
    printf("your entered matrices are:\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",A[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",B[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            C[i][j]=0;
            for(k=0;k<n;k++)
            {
                C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
            }
        }
    }
    printf("\nresultant matrix is :\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",C[i][j]);
        }
    }
    return 0;
}
