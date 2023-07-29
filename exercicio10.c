/*Fa ̧ca uma fun ̧c ̃ao que receba um caractere e verifique se ele  ́e uma vogal ou n ̃ao.*/

#include <stdio.h>
#include <stdbool.h>

bool ehVogal(char caractere) {
    if (caractere >= 'A' && caractere <= 'Z') {
        caractere = caractere + 32;
    }

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
        return true;
    } else {
        return false;
    }
}

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    bool resultado = ehVogal(caractere);

    if (resultado) {
        printf("O caractere '%c' é uma vogal.\n", caractere);
    } else {
        printf("O caractere '%c' não é uma vogal.\n", caractere);
    }

    return 0;
}


