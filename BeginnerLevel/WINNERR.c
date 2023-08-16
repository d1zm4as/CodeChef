#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d,e;
	    scanf("%d %d %d %d",&b ,&c,&d,&e);
	    int maior1 = 0;
	    int maior2 = 0;
	    if(b>=c){
	        maior1 = b;
	    }else{
	        maior1 = c;
	    }
	    
	    if(d>=e){
	        maior2 = d;
	        
	    }else{
	        maior2  = e;
	        
	    }
	    
	    if(maior1< maior2){
	        printf("p\n");
	    }else if(maior2<maior1){
	        printf("q\n");
	    }else{
	        printf("tie\n");
	    }
	    
	}
	return 0;
}