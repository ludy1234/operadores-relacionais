#include <stdio.h>

main(){
    //Leia a altura e imprima se é maior que 1.8m;

    float altura;

    printf("Digite sua altura");
    scanf("%f", &altura);

    if (altura > 1.80){
        printf("Tem altura maior que 1.80 metros./n");
    }
    else{
        printf("Nao tem altura maio que 1.80 metros./n");
    }

    return 0;
}