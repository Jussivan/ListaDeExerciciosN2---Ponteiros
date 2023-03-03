#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int teste = 0;
	char palavra[500], novapalavra[500], *ponteiro;
	gets(palavra);
	ponteiro = palavra;
	for(int i = 0; i < 500; i++) {
		if(*(ponteiro + i) != 'a' && *(ponteiro + i) != 'e' && *(ponteiro + i) != 'i' && *(ponteiro + i) != 'o' && *(ponteiro + i) != 'u') {
			novapalavra[teste] = *(ponteiro + i);
			teste++;
		}
		if(*(ponteiro + i) == '\0') {
			break;
		}
	}
	printf("A palavra sem vogais é: %s", novapalavra);
	return 0;
}
