#include <stdio.h>

main(){

    //Leia a idade e imprima se a pessoa é maior;

    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("E maior de idade. /n");
    }
    else{
        printf("Nao e maior de idade./n");
    }

    return 0;
}