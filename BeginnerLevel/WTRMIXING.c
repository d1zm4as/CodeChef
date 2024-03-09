#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d,e;
	    scanf("%d %d %d %d",&b ,&c,&d,&e);
	    if (b==c){
	        printf("yes\n");
	        continue;
	    }
	    int diff = b-c;
	    if(diff>0 && diff<= e){
	        printf("yes\n");
	        continue;
	    }
	    if(diff<0 && d>=(diff*-1)){
	        printf("Yes\n");
            continue;
        
	    }
	    
	    printf("no\n");
	    
	    
	    
	    
	    
	    
	    
	}
	return 0;
}