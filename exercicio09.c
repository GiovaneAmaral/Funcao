/*Fa ̧ca uma que receba uma determinada hora expressa no formato de horas, minutos e
segundos e, em sequida, transforme no valor correspondente em segundos.*/

#include <stdio.h>

int converterParaSegundos(int horas, int minutos, int segundos) {
    return horas * 3600 + minutos * 60 + segundos;
}

int main() {
    int horas, minutos, segundos;

    printf("Digite a hora: ");
    scanf("%d", &horas);
    printf("Digite o minuto: ");
    scanf("%d", &minutos);
    printf("Digite o segundo: ");
    scanf("%d", &segundos);

    int segundosTotais = converterParaSegundos(horas, minutos, segundos);

    printf("O valor correspondente em segundos é: %d segundos\n", segundosTotais);

    return 0;
}
