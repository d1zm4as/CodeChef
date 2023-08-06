#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	    int n,x;
	    scanf("%d %d\n",&n,&x);
	    if(n<=x)
	    {
	        printf("0\n");
	    }
	    else if(n>x && (n-x)%4==0)
	    {
	        printf("%d\n",(n-x)/4);
	    }
	    else
	    {
	        printf("%d\n",((n-x)/4)+1);
	    }
	}
	return 0;
}
