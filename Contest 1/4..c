#include<stdio.h>
int main()
{
    int T,L,W,H,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&L,&W,&H);
        if((L>0 && L<=20) && (W>0 && W<=20) && (H>0 && H<=20) )
        {
            printf("Case %d: good\n",i);
        }
        else
        {
            printf("Case %d: bad\n",i);
        }
    }
    return 0;
}
