#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b;
	    scanf("%d",&b);
	    int c;
	    if (b%2==0){
	        c = b/2;
	        
	    }else{
	        
	        c= (b+1)/2;
	    }
	    printf("%d %d\n",c,b);
}
	return 0;

}