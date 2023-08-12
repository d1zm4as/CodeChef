#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d;
	    scanf("%d %d %d",&b ,&c, &d);
	    if(b>=c && b >=d){
	        printf("%d\n", b);
	    }else if (c >= b && c>= d){
	        printf("%d\n",c);
	    }else if (d>=b && d>=c){
	        printf("%d\n", d);
	    }else{
	        printf("%d\n",b);
	    }
	}
	return 0;
}