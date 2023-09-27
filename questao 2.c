#include <stdio.h>

void main() {
    int num, soma = 0;

    scanf("%d", &num);

    int segureonaqui =num;
    while (num != 0) {
        soma += num % 10; 
        num /= 10; 
    }

   
    if (segureonaqui % 2 == 0) {
        printf("%d eh par\n", segureonaqui);
    } else {
        printf("%d eh impar\n", segureonaqui);
    }

    
    printf("A soma dos algarismos de %d eh %d\n",segureonaqui,soma);
}