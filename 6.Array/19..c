
#include<stdio.h>
int main()
{
    int a[100],i,j,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    count++;
                    break;
                }
            }
        }
     }
     printf("\n Total duplicate elements are %d\n",count);
}
