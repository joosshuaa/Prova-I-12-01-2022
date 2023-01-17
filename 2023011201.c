#include <stdio.h>

int main() {
    // variáveis para armazenar as médias
    float media, maior_media, menor_media, soma_medias = 0;
    int contador = 0;

    while (1) {
        // ler média
        printf("Informe a media do aluno: ");
        scanf("%f", &media);

        // verificar se a média é negativa
        if (media < 0) {
            break;
        }

        // atualizar maior média
        if (contador == 0 || media > maior_media) {
            maior_media = media;
        }

        // atualizar menor média
        if (contador == 0 || media < menor_media) {
            menor_media = media;
        }

        // atualizar soma das médias
        soma_medias += media;
        contador++;
    }

    // calcular média aritmética
    float media_aritmetica = soma_medias / contador;

    // imprimir resultados
    printf("Maior media: %.2f\n", maior_media);
    printf("Menor media: %.2f\n", menor_media);
    printf("Media aritmetica: %.2f\n", media_aritmetica);

    return 0;
}