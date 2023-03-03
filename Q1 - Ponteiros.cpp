#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valor[5];
	int *ponteiro;
	for(int i = 0; i < 5; i++) {
		printf("Informe o valor do %d° elemento: ", i + 1);
		scanf("%d", &valor[i]);
	}
	ponteiro = valor;
	for(int j = 0; j < 5; j++) {
		printf("O valor do %d° elemento do array é: %d\n", j + 1,  *(ponteiro + j));
		printf("O endereço do %d° elemento do array é: %d\n", j + 1,  (ponteiro + j));
	}
	return 0;
}
