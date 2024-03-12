#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,test;
	scanf("%d",&a);
	while(a--){
	    scanf("%d",&b);
	    test = b%3;
	    if(test==0){
	        printf("Normal\n");
	    }else if(test==2){
	        printf("small\n");
	    }else{
	        printf("huge\n");
	    }
	    
	    
	}
	return 0;
}