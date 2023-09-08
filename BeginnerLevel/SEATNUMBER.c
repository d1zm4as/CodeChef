#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b;
	    scanf("%d",&b);
	    if(b<=15){
	        if (b>=11 && b<=15){
	            printf("lower single\n");
	        }else{
	            printf("lower double\n");
	        }
	    }else{
	        if (b>=26 && b<=30){
	            printf("upper single\n");
	        }else{
	            printf("upper double\n");
	        }
	    }
	}
	return 0;
}