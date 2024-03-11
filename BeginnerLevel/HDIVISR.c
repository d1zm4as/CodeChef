#include <stdio.h>

int main(void) {
	// your code goes here
	int a,i;
	scanf("%d",&a);
	for(i = 10; i>=0; i--){
	    if(a%i==0){
	        printf("%d\n",i);
	        break;
	    }
	}
	
	
	
	return 0;
}