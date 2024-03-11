#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,total,i;
	    scanf("%d",&b);
	    total = 1;
	    for(i = 1;i <= b;i++){
	        total*=i;
	    }   
	    printf("%d\n",total);
	}
	return 0;
}