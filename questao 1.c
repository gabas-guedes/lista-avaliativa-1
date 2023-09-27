#include <stdio.h>

void main(){
    int ano = 0;
    while (1){
    
    scanf("%d", &ano);

    if ((ano >= 1896) && (ano <= 2022)) {
        if (ano % 4 == 0 && ano != 1916 && ano != 1940 && ano != 1944) {
            printf("\nOs Jogos Olimpicos ocorreram no ano de %d", ano);
        } else if ((ano >= 1930 && ano % 2 == 0) && (ano != 1940 && ano != 1942 && ano != 1944 && ano != 1946)) {
            printf("\nA Copa do Mundo de Futebol ocorreu no ano de %d", ano);
        } else {
            printf("\nNao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d", ano);
        }
    } else {
        printf("\nNao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d", ano);
    }
    }
}