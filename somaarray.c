#include <stdio.h>

int main() {

    int numero[5];
    int i;
    int contador = 0;

    printf("Digite 5 numeros para saber a soma: \n");

    for(i=0; i<5;i++){

        scanf("%d", &numero[i]);
        contador = contador + numero[i];

    }

    printf("A soma dos valores eh %d", contador);

    return 0;
}
