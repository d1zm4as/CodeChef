#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	if (a<3){
	    printf("gold");
	    
	}else if(a>=3 &&  a<6){
	    printf("silver");
	    
	}else{
	    printf("bronze");
	    
	}
	
	return 0;
}