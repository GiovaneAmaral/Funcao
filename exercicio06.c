/*Implemente uma fun ̧c ̃ao que receba como parˆametro o peso (em quilos) e a altura (metros)
de uma pessoa, calcule e retorne o seu IMC ( ́Indice de Massa Corporal), cujo c ́alculo  ́e dado
por: IMC = peso/(altura * altura). Implemente outra fun ̧c ̃ao que receba como parˆametro
o IMC de uma pessoa e a classifique de acordo com a Tabela 1.*/

#include <stdio.h>

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

void classificarIMC(float imc) {
    if (imc < 16.0) {
        printf("Classificacao: Magreza grave\n");
    } else if (imc >= 16.0 && imc < 17.0) {
        printf("Classificacao: Magreza moderada\n");
    } else if (imc >= 17.0 && imc < 18.5) {
        printf("Classificacao: Magreza leve\n");
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Classificacao: Saudavel\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc >= 30.0 && imc < 35.0) {
        printf("Classificacao: Obesidade Grau I\n");
    } else if (imc >= 35.0 && imc < 40.0) {
        printf("Classificacao: Obesidade Grau II (severa)\n");
    } else {
        printf("Classificacao: Obesidade Grau III (morbida)\n");
    }
}

int main() {
    float peso, altura;

    // Solicita ao usuário o peso e a altura
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    float imc = calcularIMC(peso, altura);

    // Exibe o resultado do IMC
    printf("Seu IMC e: %.2f\n", imc);

    classificarIMC(imc);

    return 0;
}
