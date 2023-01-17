#include <stdio.h>
#include <math.h>

double obterNumeroPositivoNoRange() {
    double x;
    printf("Insira um numero real positivo no intervalo [0,1]: ");
    scanf("%lf", &x);
    while (x < 0 || x > 1) {
        printf("Valor invalido. Insira um numero real positivo no intervalo [0,1]: ");
        scanf("%lf", &x);
    }
    return x;
}

double arctan(double x) {
    double result = x;
    double term = x;
    int i = 3;
    while (fabs(term) > 1e-15) {
        term = -term * x * x / i;
        result += term;
        i += 2;
    }
    return result;
}

void print_arctan(double x) {
    printf("Arco tangente de %lf: %lf radianos\n", x, arctan(x));
}

int main() {
    double x = obterNumeroPositivoNoRange();
    print_arctan(x);
    return 0;
}
