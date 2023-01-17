#include <stdio.h>

int solicita_numero() {
    int numero;
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &numero);
    while (numero <= 0) {
        printf("Numero invalido. Insira novamente: ");
        scanf("%d", &numero);
    }
    return numero;
}

int hiperfatorial(int numero) {
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        int fatorial = 1;
        for (int j = 1; j <= i; j++) {
            fatorial *= j;
        }
        resultado *= fatorial;
    }
    return resultado;
}

void imprime_resultado(int numero, int hiperfatorial) {
    printf("O hiperfatorial de %d e %d\n", numero, hiperfatorial);
}

int main() {
    int numero = solicita_numero();
    int hiperfatorial_numero = hiperfatorial(numero);
    imprime_resultado(numero, hiperfatorial_numero);
    return 0;
}
