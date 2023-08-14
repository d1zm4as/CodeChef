#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d;
	    scanf("%d %d %d",&b ,&c,&d);
	    if(d%c==0){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}