#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X,Y,Z;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(X%Y==0)
	    {
	        printf("\n%d",(X/Y)*Z);   
	    }
	    else
	    {
	        printf("\n%d",((X/Y)+1)*Z);
	    }
	    
	}
	return 0;
}

