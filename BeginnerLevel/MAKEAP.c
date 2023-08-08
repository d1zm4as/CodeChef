#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    int total  = b+c;
	    if(total%2==0){
	       
	        printf("%d\n",total/2);
	    }else{
	        printf("-1\n");
	    }
	}
	return 0;
}