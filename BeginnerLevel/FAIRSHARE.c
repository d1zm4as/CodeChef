#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,real;
	scanf("%d",&a);
	while(a--){
	    scanf("%d %d",&b ,&c);
	    
	    
	    real =  b-((b/(c+1))*c);
	    if(real==0){
	        printf("%d\n",b);
	    }else{
	    printf("%d\n",real);
	        
	    }
	    
	}
	return 0;
}
	        