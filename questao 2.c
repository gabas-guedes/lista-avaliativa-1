#include <stdio.h>

void main() {
    int num = 0, soma = 0;

    scanf("%d", &num);

    // separar os digitos do numero
    while (num != 0) {
        soma += num % 10; // soma = soma + num % 10;
        num /= 10; // num = num / 10;
    }

    // olhar se o numero eh par ou impar
    if (num % 2 == 0) {
        printf("%d eh par\n", num);
    } else {
        printf("%d eh impar\n", num);
    }

    // imprimir a soma dos digitos
    printf("A soma dos algarismos eh igual a %d\n", soma);
}