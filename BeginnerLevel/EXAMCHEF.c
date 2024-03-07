#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    float b,c,d;
	    scanf("%f %f %f",&b ,&c,&d);
	    int t = b*c;
	    float tax = (d/t)*100;
	    if(tax > 50){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}