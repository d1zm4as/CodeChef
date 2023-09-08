#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b;
	    scanf("%d ",&b);
	    if(b%4==0){
	        printf("good\n");
	    }else{
	        printf("NOt good\n");
	    }
	}
	return 0;
}