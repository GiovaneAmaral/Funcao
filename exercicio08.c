/*Fa ̧ca uma fun ̧c ̃ao que receba um n ́umero inteiro qualquer, calcule e mostre todos os seus
divisores, bem como a quantidade de divisores existentes.*/

#include <stdio.h>

void mostrarDivisores(int numero) {
    int contador = 0;

    printf("Divisores de %d:\n", numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
            contador++;
        }
    }

    printf("\nQuantidade de divisores: %d\n", contador);
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    mostrarDivisores(numero);

    return 0;
}
