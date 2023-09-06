#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(c%a==0 && c%b==0)
        printf("ANY\n");
        else if(c%a==0)
        printf("CHICKEN\n");
        else if(c%b==0)
        printf("DUCK\n");
        else
        printf("NONE\n");
	}
	return 0;
}
