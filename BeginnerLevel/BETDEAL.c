#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	
	scanf("%d",&a);
	while(a--){
	    float b,c;
	    
	    scanf("%f %f",&b ,&c);
	    if(100-b < 200-(c*2.0)){
	        printf("firSt\n");
	    }else if (100-b == 200-(c*2.0)){
	        printf("both\n");
	    }else{
	        printf("second\n");
	    }
	}
	return 0;
}