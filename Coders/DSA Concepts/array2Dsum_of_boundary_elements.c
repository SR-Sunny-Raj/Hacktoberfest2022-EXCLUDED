// -------------------------------------------------SUM OF BOUNDARY ELEMENT------------------------------------------------------
#include<stdio.h>
int m,n;
void insertElement(int a[m][n])
{
    int i,j;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("\nEnter element at a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    } 
}
void displayMatrix(int a[m][n])
{
    int i,j;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int sumOfboundaries(int b[m*n])
{
    int sum = 0;
    for (int i = 0; i < m*n; i++)
    {
        sum += b[i];
    }
    return sum;
}
void displayBoundaryElement(int b[m*n])
{
    for (int i = 0; i < m*n; i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n");
}
void checkBoundary(int a[m][n])
{
    int b[m*n],i,j,x,k=0;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i==0 || j==0 || i==m-1 || j==n-1)
            {
                while (k<(m*n))
                {
                    b[k] = a[i][j]; 
                    k++;
                    break;  
                }
            }
        }
    }
    printf("\nBoundary elements are :: ");
    displayBoundaryElement(b);
    x = sumOfboundaries(b);
    printf("\nSum of boundary elements of the 2-D array is :: %d",x);
    printf("\n\n");
}
int main()
{
    printf("\nEnter the row size :: ");
    scanf("%d",&m);
    printf("\nEnter the column size :: ");
    scanf("%d",&n);
    int a[m][n];
    insertElement(a);
    displayMatrix(a);
    checkBoundary(a);
}