#include <stdio.h>

int main() {
  int num1, num2;
  int *pont1, *pont2;
  printf("Informe o Primeiro Número: ");
  scanf("%d", &num1);
  printf("Informe o Segundo Número: ");
  scanf("%d", &num2);
  pont1 = &num1;
  pont2 = &num2;
  *pont1 = *pont1 + *pont2;
  *pont2 = *pont1 - *pont2;
  *pont1 = *pont1 - *pont2;
  printf("\nPrimeiro Número:  %d\nSegundo Número: %d", num1, num2);
  return 0;
}