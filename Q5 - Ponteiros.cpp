#include <stdio.h>

int main() {
  float num;
  float *pont;
  printf("Digite um Número Real: ");
  scanf("%f", &num);
  pont = &num;
  printf("\nO Número Original é:    %.2f\nO Dobro desse Número é:  %.2f", *pont, *pont * 2);
  return 0;
}