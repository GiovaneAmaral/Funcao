/*Fa ̧ca um programa para calcular as ra ́ızes da equa ̧c ̃ao de 2o grau. O programa recebe como
entrada os n ́umeros a, b, c, que correspondem aos coeficientes da equa ̧c ̃ao de segundo grau
(ax2 + bx + c = 0). Em seguida, o programa deve mostrar as ra ́ızes da equa ̧c ̃ao. Caso
as ra ́ızes n ̃ao existam, uma mensagem deve ser exibida (por exemplo, “N ̃ao existem ra ́ızes
reais”). Caso a equa ̧c ̃ao n ̃ao seja de segundo grau, uma mensagem tamb ́em deve ser exibida
(por exemplo, “N ̃ao  ́e uma equa ̧c ̃ao de segundo grau”).
Para isso, implemente fun ̧c ̃oes para calcular e retornar o valor de delta e para calcular e
retornar os valores das raizes x1 e x2 da equa ̧c ̃ao.*/

#include <stdio.h>
#include <math.h>

double calcularDelta(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

void calcularRaizes(double a, double b, double c) {
    double delta = calcularDelta(a, b, c);

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes sao: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("A unica raiz e: x = %.2lf\n", x);
    } else {
        printf("Nao existem raizes reais.\n");
    }
}

int main() {
    double a, b, c;

    printf("Digite o valor de 'a': ");
    scanf("%lf", &a);
    printf("Digite o valor de 'b': ");
    scanf("%lf", &b);
    printf("Digite o valor de 'c': ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Nao e uma equacao de segundo grau.\n");
    } else {
        calcularRaizes(a, b, c);
    }

    return 0;
}
