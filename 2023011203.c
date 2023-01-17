#include <stdio.h>

int main() {
    float nota, maior, menor, soma = 0, cont = 0;
    printf("Insira as notas dos alunos (-1 para sair):\n");
    scanf("%f", &nota);

    // inicializando maior e menor com o primeiro valor lido
    maior = nota;
    menor = nota;

    while (nota >= 0) {
        soma += nota;
        cont++;

        // verificando se a nota lida é maior ou menor do que as anteriores
        if (nota > maior) {
            maior = nota;
        } else if (nota < menor) {
            menor = nota;
        }

        scanf("%f", &nota);
    }

    if (cont > 0) {
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media: %.2f\n", soma/cont);
    } else {
        printf("Nenhuma nota foi inserida.\n");
    }

    return 0;
}
