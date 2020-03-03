#include <stdio.h>


int main(void) {

  int numero [10];
  int i,n, maior;

  for (i=0;i<10;i++){
  scanf ("%d", &numero[i]);
  }
  scanf ("%d", &n);
  for (i=0;i<10;i++){
    if (numero[i] >=n){
    printf ("%d\n", numero[i]);
    // professor o enunciado pede que imprima todos os numeros e não a soma dos que são maiores ou iguais a n.
    }
  }
  return 0;
}
