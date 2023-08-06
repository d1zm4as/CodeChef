#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b;
	    scanf("%d",&b);
	    if(b<=3){
	        printf("bronze\n");
	    }else if (b>3 && b<=6){
	        printf("silver\n");
	    }else if (b>6){
	        printf("gold\n");
	}
}
	return 0;
}