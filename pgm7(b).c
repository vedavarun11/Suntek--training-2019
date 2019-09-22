#include<stdio.h>
#define MIN 1
int main()
{
    int i,j,s=3;
    for(i=3;i>=MIN;i--)
    {
        for(j=3;j>s;j--)
        {
            printf(" ");
            
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        s--;
    }
    return 0;
}
