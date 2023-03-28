#include <stdio.h>
#include <stdlib.h>

int soma(int *v1, int *v2, int *v3, int tama, int tamb) {
    if (tama != tamb) {
        return 0;
    }

    for (int i = 0; i < tama; i++) {
        *(v3 + i) = *(v1 + i) + *(v2 + i);
    }

    return 1;
}

int main() {
    int v1[] = {4,6,9,3,8,5};
    int v2[] = {2,6,4,8,5,7};
    int v3[6];

    int x = soma(v1, v2, v3, 6, 6);

    if (x) {
        printf("Soma dos vetores: %d %d %d %d %d %d\n", v3[0], v3[1], v3[2], v3[3], v3[4], v3[5]);
    }
    else {
        printf("Vetores de tamanhos diferentes\n");
    }

    return 0;
}
