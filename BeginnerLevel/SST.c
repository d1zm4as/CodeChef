#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    if(b*10>c*5){
	        printf("first\n");
	    }else if (b*10<c*5){
	        printf("second\n");
	    }else{
	        printf("any\n");
	    }
	}
	return 0;
}