#include <stdio.h>

int main(void) {
	// your code goes here
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    if(b>c){
	        printf("new\n");
	    }else if (c>b){
	        printf("old\n");
	    }else{
	        printf("same\n");
	    }

	return 0;
}