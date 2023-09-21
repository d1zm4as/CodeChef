#include <stdio.h>

int main() {
	// your code goes here
	int T,i;
	scanf("%d",&T);
	while(T--){
	     int n;
        scanf("%d", &n);

        char c[n + 1];
        scanf("%s", c);
        for (i = 0; i < n + 1; i++)
        {
            if (c[i] == '\0')
            {
                break;
            }
            else if (c[i] == 'A')
            {
                printf("%c", 'T');
            }
            else if (c[i] == 'T')
            {
                printf("%c", 'A');
            }
            else if (c[i] == 'G')
            {
                printf("%c", 'C');
            }
            else if (c[i] == 'C')
            {
                printf("%c", 'G');
            }
        }
        printf("\n");
    }
}