#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,cont,i;
	scanf("%d",&a);
	while(a--){
	    
	    
	    scanf("%d %d",&b ,&c);
        cont = 0;
        for(i = b; i<=c;i++){
            if (i%10 == 3||i%10 == 2||i%10 == 9 ){
            
            cont++;
                
            }
            
                
        }	    
	    printf("%d\n",cont);   
	}
	    
	    
	return 0;
}