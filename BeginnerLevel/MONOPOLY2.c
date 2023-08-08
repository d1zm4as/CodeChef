#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d,e;
	    scanf("%d %d %d %d",&b ,&c,&d,&e);
	    if(b>(c+d+e)||c>(b+d+e)||d>(c+b+e)||e>(c+d+b)){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
	return 0;
}