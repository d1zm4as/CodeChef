#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    if(c>b){
	        printf("%d\n",b);
	    }else{
	        printf("%d\n",(b*2)-c);
	    }
	}
	return 0;
}