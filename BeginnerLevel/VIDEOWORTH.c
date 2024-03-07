#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b;
	    int tax = 24000;
	    scanf("%d",&b);
	    printf("%d\n", b*tax);
	}    
	return 0;
	
}