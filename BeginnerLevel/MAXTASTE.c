#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c,d,e;
	    int x,y;
	    scanf("%d %d %d %d",&b ,&c,&d,&e);
        if (b>c){
            x = b;
        }else{
            x = c;
        }
        if (d>e){
            y = d;
        }else{
            y = e;
        }
        printf("%d\n",x+y);
	}
	return 0;
}