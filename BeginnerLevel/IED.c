#include <stdio.h>

int main(void) {
	// your code goes here

	    int b,c,d;
	    scanf("%d %d %d ",&b,&c, &d );
	    if(b*d > c*d){
	        printf("%d\n",b*d);
	    }else{
	        printf("%d\n",c*d);
	    }
	
	return 0;
}