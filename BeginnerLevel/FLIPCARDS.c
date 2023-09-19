#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    if(c>b-c){
	        printf("%d\n",b-c);
	    }else{
	        printf("%d\n",c);
	    }
	}
	return 0;
}