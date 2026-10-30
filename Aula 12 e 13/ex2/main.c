
#include <stdio.h>

int main() {
    FILE *arquivo;
    int quantidade, i;
    char dia[20];
    float consumo;

    printf("Quantidade de registros: ");
    scanf("%d", &quantidade);

    arquivo = fopen("consumo.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 1; i <= quantidade; i++) {
        printf("Dia: ");
        scanf("%19s", dia);

        printf("Consumo: ");
        scanf("%f", &consumo);

        fprintf(arquivo, "%s %.2f\n", dia, consumo);
    }

    fclose(arquivo);

    printf("Registros gravados com sucesso!\n");

    return 0;
}

