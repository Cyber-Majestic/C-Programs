#include<stdio.h>
int main()
{
    int a[20],n,pos,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position of the element to delete:");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
