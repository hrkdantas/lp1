#include <stdio.h>

int main() {

    int n;
    int fatorial = 1;

    printf("Voce quer saber o fatorial de quanto?");
    scanf("%i",&n);

    for( ; n >= 1; --n){

        fatorial = fatorial * n;

    }

    printf("O numero fatorial eh %i", fatorial);

    return 0;


}
