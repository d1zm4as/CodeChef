#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    if(c%b!=0){
	        printf("NO\n");
	  }else{
	      printf("Yes\n");
	  }
	       
}

	return 0;
}