#include <stdio.h>

int main(){

    int n, i;
    int ehprimo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n <= 1){
        ehprimo = 0;
    } else {

        for(i=2; i < n; i++) {

            if(n % i == 0) {
                ehprimo = 0;
                break;
            }
        }
    }
    if(ehprimo == 1 ){
        printf("%d eh primo", n);
    }
    else {
        printf("%d nao eh primo", n);
    }

    return 0;
}
