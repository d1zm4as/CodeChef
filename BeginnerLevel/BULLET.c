#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d,tempo;
	scanf("%d",&a);
	while(a--){
	    scanf("%d %d %d",&b ,&c,&d);
	    tempo = c/b;
	    if(tempo >d){
	        printf("0\n");
	    }else{
	        printf("%d\n",d-tempo);
	    }
	}
	return 0;
}