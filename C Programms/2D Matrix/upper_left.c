//WAP to print the upper left traiangle of a matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,f=0;
    printf("Enter the no. of rows and columns : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the value at (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix : \n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Upper Left Triangle : \n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c-i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}