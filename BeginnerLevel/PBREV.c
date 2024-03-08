#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int cont = 0;
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int lista[n];
	    int i;
	    int cont = 1;
	    for(i = 0; i<n;i++){
	        scanf("%d", &lista[i]);
	        }
	       
	    for (i = 0; i < n; i++) {
            if (lista[i] <= 4) { 
                cont = 0; 
                break;
            }
        }
        
        if(cont){
            printf("yes\n");
        }else{
            printf("no\n");
        }
	   
	
	    
	    
	    
}
	return 0;
}