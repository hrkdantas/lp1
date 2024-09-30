#include <stdio.h>

int main(){

    char texto[1000];
    int i = 0;
    int contador = 0;

    printf("Digite um texto: \n");

    fgets(texto, 1000, stdin);

    while(texto[i] != '\0') {
        contador++;
        i++;
    }

    printf("O texto possui %d caracteres", contador);

    return 0;
}

