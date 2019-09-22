#include<stdio.h>
int table(int a);
int main()
{
    int n;
    printf("Enter the number for the table");
    scanf("%d",&n);
    table(n);
    return 0;
}
int table(int m)
{
    int i,j;
    for(j=0;j<=10;j++)
    {
        printf("%d*%d=%d\n",m,j,m*j);
    }
}