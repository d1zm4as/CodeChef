#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	if(a==2000){
	  printf("K00");
	  exit(0);

	}
	int b = a%100;
	printf("K");
	printf("%02d",a%100);
	
	return 0;
}