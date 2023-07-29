/*Fa ̧ca um programa que calcule a potencia de um n ́umero qualquer fornecido pelo usu ́ario.
Para isso, implemente uma fun ̧c ̃ao que receba como parˆametro dois n ́umeros inteiros x e n,
calcule e retorne para o programa principal o resultado de x
n
. NAO USE nenhuma fun ̧c ̃ao  ̃

pronta (ou seja, pow()).*/

#include <stdio.h>

// Função para calcular a potência de x elevado a n
long long int calcularPotencia(int x, int n) {
    long long int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= x;
    }
    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    long long int resultado = calcularPotencia(base, expoente);

    printf("%d elevado a %d é igual a %lld\n", base, expoente, resultado);

    return 0;
}
