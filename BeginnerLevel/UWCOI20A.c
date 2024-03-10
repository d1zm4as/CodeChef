#include <stdio.h>

int main(void) {
    // your code goes here
    int a;
    scanf("%d", & a);
    while (a--) {
        int maior = 0;
        int n;
        scanf("%d", & n);
        while (n--) {
            int atual;
            scanf("%d", & atual);
            if (atual >= maior) {
                maior = atual;
            }
        }
        printf("%d\n", maior);
    }
    return 0;
}