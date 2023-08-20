#include<stdio.h>
int main()
{
    int T,A,B,C;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&A,&B,&C);
        if((A*B)<0 || (B*C)<0 || (A*C)<0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}