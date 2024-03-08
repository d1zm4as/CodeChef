#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d;
	    scanf("%d %d %d",&b ,&c,&d);
	    int money = d/2;
	    int area = b*c;
	    int total = money/area;
	    printf("%d\n",total);
	}
	return 0;
}