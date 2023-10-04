#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    if(b+c>=11 ){
	        printf("%d\n",21-(b+c));
	    }else{
	        printf("-1\n");
	    }
	}
	return 0;
}