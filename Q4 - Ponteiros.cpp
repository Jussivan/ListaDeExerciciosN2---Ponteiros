#include <stdio.h>

int main(){
	int n, vet[n], *pont;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
	}
	pont = vet;
	
	for(int j = n; j > 0; j--) {
		printf("%d ", *(pont + (j -1)));
	}
	return 0;
}
