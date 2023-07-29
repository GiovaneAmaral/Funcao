/*Fa ̧ca uma fun ̧c ̃ao que receba como parˆametro um n ́umero inteiro e verifique se este  ́e primo
ou n ̃ao.*/

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero;

    // Solicita ao usuário um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    bool resultado = ehPrimo(numero);

    if (resultado) {
        printf("%d eh primo.\n", numero);
    } else {
        printf("%d nao eh primo.\n", numero);
    }

    return 0;
}
