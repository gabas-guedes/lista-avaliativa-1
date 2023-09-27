#include<stdio.h>

int main(){
    int num;
    int soma = 0;

    scanf("%d",&num);
    if(num % 2 == 0){
        printf("%d eh par\n",num);
    }else{
        printf("%d eh impar\n",num);
    }

   int seguraonaqui = num;

    while(num > 0){
        soma += num % 10;
        num /= 10;
    }
    printf("A soma dos algarismos de %d eh %d\n",seguraonaqui,soma);


    return 0;
}