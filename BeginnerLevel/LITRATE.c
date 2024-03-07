#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    float b,c;
	    scanf("%f %f",&b ,&c);
	    float tax = (c/b)*100;
	    if(tax>=75){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}