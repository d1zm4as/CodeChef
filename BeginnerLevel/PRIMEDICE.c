#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool is_prime(int x)
{
    if (x==2 || x == 3){
      return true;
    }
    if (x<2 || x%2==0){
      return false;
    }
    int lim = round(sqrt(x))+1;
    for (int i = 3; i <= lim;i+=2){
      if(x%i==0){
        return false;
      }
    }
  
  
    return true;
}
int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	while(a--){
	    int b,c;
	    scanf("%d %d",&b ,&c);
	    int soma = b+c;
	    if(is_prime(soma)){
	        printf("alice\n");
	    }else{
	        printf("bob\n");
	    }
	}
	return 0;
}