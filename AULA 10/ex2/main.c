#include <stdio.h>

int main() {
	float salario[6];
	int i;
	float media;
	int abaixo = 0;
	float maior = 0;
	float soma = 0.0f;
	for ( i = 0; i < 6; i++){
		printf("Digite o salario do %d funcioanrio: ", i + 1);
		scanf("%f", &salario[i]);
		soma += salario[i];
		
	}
	media = soma / 6 ;
	maior = salario[0];
	for(i = 1; i < 6; i++){
		if (salario[i] > maior)
		maior = salario[i];
	}
	for(i = 0; i < 6; i++){
		if (salario[i] > media){
			abaixo ++;
		}
	}
	printf("Media salarial: R$: %.2f\n", media);
	printf("Maior salario: R$ %.2f\n", maior);
	printf("Salarios abaixo da media: %d\n", abaixo);
	
	return 0;
}
