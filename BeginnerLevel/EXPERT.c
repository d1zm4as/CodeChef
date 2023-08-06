#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    int e = (c*100/b);
	    if(e>= 50){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}