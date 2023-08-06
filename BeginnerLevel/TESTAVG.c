#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d;
	    scanf("%d %d %d",&b ,&c,&d);
	    if(((b+c)/2)>=35 && ((b+d)/2) >= 35 && ((c+d)/2) >= 35){
	        printf("pass\n");
	    }else{
	        printf("fail\n");
	    }
	}
	return 0;
}