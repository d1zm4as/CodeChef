#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
	scanf("%d",&t );
	    
    while(t--){	    
        int a,b,c,d,e;
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e );
	    int soma = a+b+c+d+e;
	    if(soma>=4){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }}
	
	return 0;
}