
#include <stdio.h>

int main() {
    FILE *arquivo;
    int numero, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    arquivo = fopen("tabuada.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i <= 10; i++) {
        fprintf(arquivo, "%d x %d = %d\n",
                numero, i, numero * i);
    }

    fclose(arquivo);

    printf("Tabuada gravada no arquivo tabuada.txt!\n");

    return 0;
}

