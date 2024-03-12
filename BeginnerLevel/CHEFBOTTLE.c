#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d,cap;
	scanf("%d",&a);
	while(a--){
	    
	    scanf("%d %d %d",&b ,&c,&d);
	    cap = d/c;
	    if(b>=cap){
	        printf("%d\n",cap);
	    }else{
	        printf("%d\n",b);
	    }
	}
	return 0;
}