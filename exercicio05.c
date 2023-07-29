/*Implemente uma fun ̧c ̃ao que receba como parˆametro 2 notas e uma op ̧c ̃ao correspondendo
ao c ́alculo da m ́edia. Caso a op ̧c ̃ao seja a letra “a”, deve ser calculada a m ́edia aritm ́etica;
caso a op ̧c ̃ao seja a letra “p”, deve ser calculada a m ́edia ponderada (pesos 3 e 2); caso a
op ̧c ̃ao seja a letra “h”, deve ser calculada a m ́edia harmˆonica. Retorne a m ́edia devidamente
calculada para o programa principal.*/

#include <stdio.h>

float calcularMediaAritmetica(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

float calcularMediaPonderada(float nota1, float nota2) {
    return ((3 * nota1) + (2 * nota2)) / 5.0;
}

float calcularMediaHarmonica(float nota1, float nota2) {
    return 2.0 / ((1.0 / nota1) + (1.0 / nota2));
}

int main() {
    float nota1, nota2;
    char opcao;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a opcao (a - media aritmetica, p - media ponderada, h - media harmonica): ");
    scanf(" %c", &opcao);

    float media;

    if (opcao == 'a') {
        media = calcularMediaAritmetica(nota1, nota2);
    } else if (opcao == 'p') {
        media = calcularMediaPonderada(nota1, nota2);
    } else if (opcao == 'h') {
        media = calcularMediaHarmonica(nota1, nota2);
    } else {
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("A media calculada e: %.2f\n", media);

    return 0;
}
