#include <stdio.h>

void main() {

    int senha = 0, aux = 0;

    scanf("%d", &senha);

    printf("senha cadastrada: %d\n", senha);

   scanf("%d", &aux);

    while (aux != senha) {
        printf("senha invalida!\n");
        scanf("%d", &aux);
    }
    printf("senha valida!\n");
}