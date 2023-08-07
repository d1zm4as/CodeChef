#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    int d,e;
	    scanf("%d %d",&d ,&e);
	    if(b>d || c >e){
	        printf("impossible\n");
	    }else{
	        printf("possible\n");
	    }
	}
	return 0;
}