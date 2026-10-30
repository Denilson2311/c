#include <stdio.h>

int main() {

    int N;
    int contador = 0;
    int numero = 1;

    printf("Digite a quantidade de numeros impares: ");
    scanf("%d", &N);

    while (contador < N) {

        printf("%d\n", numero);

        numero = numero + 2;
        contador = contador + 1;
    }

    return 0;
}
