#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int cont = 0;
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int lista[4];
	    int i;
	    int maior = 0;
	    for(i = 0; i<4;i++){
	        scanf("%d", &lista[i]);
	        }
	       
	    for (i = 0; i < 4; i++) {
            if (lista[i] > maior) { 
                maior = lista[i];
            }
        }
        
        
        printf("%d\n",maior);
        
	   
    }
	return 0;
}