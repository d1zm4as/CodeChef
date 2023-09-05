#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int qtde,idade;
	    int cont = 0;
	    scanf("%d %d",&qtde ,&idade);
	     while(qtde--){
            int age;
            scanf("%d",&age);
            if(age>=idade){
                cont+=1;
            }
	     }
	   printf("%d\n",cont);
	}
	return 0;
}