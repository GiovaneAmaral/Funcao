/*Fa ̧ca uma fun ̧c ̃ao para calcular a  ́area de “n” terrenos retangulares, em que “n”  ́e informado
pelo usu ́ario. O programa recebe como entrada o comprimento e a largura de cada terreno
e, ao final, exibe a sua  ́area correspondente.*/

#include <stdio.h>

float calcularArea(float comprimento, float largura) {
    return comprimento * largura;
}

int main() {
    int n;

    printf("Digite a quantidade de terrenos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float comprimento, largura;
        printf("\nDigite o comprimento do terreno %d: ", i);
        scanf("%f", &comprimento);
        printf("Digite a largura do terreno %d: ", i);
        scanf("%f", &largura);

        float area = calcularArea(comprimento, largura);

        printf("A área do terreno %d é: %.2f\n", i, area);
    }

    return 0;
}
