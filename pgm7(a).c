#include<stdio.h>
#define MAX 3
int main()
{
    int i,j,s=0;
    for(i=1;i<=MAX;i++)
    {
        for(j=1;j>=s;j--)
        {
            printf(" ");
            
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        s++;
    }
    return 0;
}
