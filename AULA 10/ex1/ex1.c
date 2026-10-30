#include <stdio.h>

int main() {
	float salario[4];
	int i;
	
	for(i = 0; i < 4; i++){
		printf("Digite o salario %d funcionario: ", i + 1);
		scanf("%f", &salario[i]);
	}
	for(i = 0; i < 4; i++){
		printf("Digite o salario %d funcionario:R$ %.2f\n", i + 1, salario[i]);
	
	}

	return 0;
}
