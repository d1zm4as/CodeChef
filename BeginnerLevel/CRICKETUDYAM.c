#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    
	    scanf("%d %d",&b ,&c);
	    if( b-c >=1){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}