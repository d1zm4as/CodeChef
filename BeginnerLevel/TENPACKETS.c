#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    int x=(2*c)+b;
	    printf("%d\n",x);
	}
	return 0;
}