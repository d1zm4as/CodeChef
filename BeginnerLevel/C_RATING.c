#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X,Y;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d",&X,&Y);
	    int A=Y-X;
	    if((A%8)==0)
	    {
	        printf("%d\n",A/8);
	    }
	    else
	    {
	        printf("%d\n",(A/8)+1);
	    }
	  
	}
	return 0;
}
