#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    
	    scanf("%d %d",&b ,&c);
	    
	    int d  = b/c;
	    
	    if(d>=20){
	        printf("%d\n",20);
	        continue;
	        
	    }else{
	        printf("%d\n",d);
	    }
	    
	    
	    
	}
	return 0;
}