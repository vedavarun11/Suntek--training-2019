#include<stdio.h>
#define SIZE 8
int main()
{
    int a[SIZE],i,n;
    printf("Enter the 8 array elements ");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to count the occurence");
    scanf("%d",&n);
    r=occ(a,SIZE);
    if(r==-1)
    {
        printf("%d",r)
    }
    printf("No. of occurences of %d : %d",n,r);

}
int occ(int a[],int s)
{
    int i,count=0;
    for(i=0;i<s;i++)
    {
        if(a[i]==n)
            count++;

    }
    if(count==0)
        return -1;
    else
    {
        return count;
    }
}
