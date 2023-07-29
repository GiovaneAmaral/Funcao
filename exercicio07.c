/*Fa ̧ca uma fun ̧c ̃ao que receba um n ́umero inteiro qualquer, calcule e mostre a tabuada deste
n ́umero.
Tabela 1: Tabela de classifica ̧c ̃ao IMC
Condi ̧c ̃ao IMC em Adultos
Abaixo do peso < 18,5
Peso normal 18,5 ≤ IMC ≤ 24,9
Sobrepeso 25 ≤ IMC ≤ 29,9
Obeso ≥ 30*/

#include <stdio.h>

void mostrarTabuada(int numero) {
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

void classificarIMC(float imc) {
    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificacao: Peso normal\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obeso\n");
    }
}

int main() {
    int numero;
    float peso, altura;

    printf("Digite um numero inteiro para mostrar a tabuada: ");
    scanf("%d", &numero);

    mostrarTabuada(numero);

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    classificarIMC(imc);

    return 0;
}
