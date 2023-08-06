#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b;
	    scanf("%d",&b);
	    int inc = b*50;
	    int ex = (inc*0.2)*2 +(inc*0.3) ;
	    printf("%d\n",inc-ex);
	   
	}
	return 0;
}