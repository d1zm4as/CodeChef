#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,aux;
	    scanf("%d %d",&b ,&c);
	    if (c%100==0){
	        aux  = c/100;
	    }else{
	        aux  = (c/100)+1;
	    }
	        
	   if(aux>=b){
	       printf("%d\n",aux-b);
	         
    	}else{
    	    
    	  printf("0\n");
    	}
	   
	}    
	    
	return 0;
}
