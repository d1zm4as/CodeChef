#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d;
	    scanf("%d %d %d",&b ,&c,&d);
	    if(b<c && b<d){
	        printf("alice\n");
	    }else if (c<b && c<d){
	        printf("bob\n");
	    }else{
	        printf("charlie\n");
	    }
	}
	return 0;
}