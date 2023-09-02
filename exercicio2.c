#include <stdio.h>

main(){

   //Leia o salário e imprima se ganha mais que o mínimo.

    int salario;
    float salarioMinimo =  1320.0;

    printf("Digite sua salario:");
    scanf("%d", &salario);

    if(salario >= 18){
        printf("Ganha mais que um salario minimo. /n");
    }
    else{
        printf("Nao ganha mais que o salario minimo/n");
    }

    return 0;
}