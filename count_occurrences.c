#include <stdio.h>

int contador(int a[], int w, int n) {
    int x, valor = 0;

    for (x = 0; x < w; x++) {
        if (a[x] == n) {
            valor++;
        }
    }

    return valor;
}

int main() {
    int a[5], i, n;
    int w = 5;

    for (i = 0; i < 5; i++) {
        printf("Type your number: \n");
        scanf("%d", &a[i]);
    }

    printf("qual número você gostaria de conferir a ocorrência?\n");
    scanf("%d", &n);

    int cont = contador(a, w, n);

    printf("o número %d aparece %d vezes no seu vetor.", n, cont);

    return 0;
}
