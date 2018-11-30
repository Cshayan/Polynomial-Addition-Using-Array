#include <stdio.h>
#include <stdlib.h>

int max(int m,int n)
{
    if(m < n)
        return n;
    else
        return m;
}
int *addPoly(int a[], int b[], int m, int n)
{
    int large= max(m , n);
    int *sum, i;
    sum= (int *)malloc(large*sizeof(int));

    for(i=0; i<m; i++)
    {
        sum[i]= a[i];
    }
    for(i=0; i<n; i++)
    {
        sum[i]+= b[i];
    }
    return sum;
}
void printPoly(int sum[], int large)
{
    int i;

    for(i=0; i<large; i++)
    {
        printf("%dx^%d ",sum[i],i);
        if(i!= large-1)
            printf(" + ");
    }
    printf("\n\n");
}
int main()
{
    int *a, *b, *sum, i, m, n;

    printf("\nEnter the size of the 1st polynomial:- ");
    scanf("%d", &m);
    a=(int *) malloc(m*sizeof(int));
    printf("\nEnter the 1st polynomial:- ");
    for(i=0; i<m; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the size of the 2nd polynomial:- ");
    scanf("%d", &n);
    b=(int *) malloc(n*sizeof(int));
    printf("\nEnter the 2nd polynomial:- ");
    for(i=0; i<n; i++)
        scanf("%d", &b[i]);

    printPoly(a, m);
    printPoly(b, n);

     sum=addPoly(a, b, m, n);
     int large=max(m, n);

     printPoly(sum, large);
     return 0;
}
