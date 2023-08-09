#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d;
	    scanf("%d %d %d",&b ,&c,&d);
	    if(b<=c*1+d*2){
	        printf("qualify\n");
	    }else{
	        printf("NOtqualify\n");
	    }
	}
	return 0;
}