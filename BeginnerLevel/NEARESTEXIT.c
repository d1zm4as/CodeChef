#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b;
	    scanf("%d",&b);
	    if(b<=50){
	        printf("left\n");
	    }else{
	        printf("right\n");
	    }
	}
	return 0;
}