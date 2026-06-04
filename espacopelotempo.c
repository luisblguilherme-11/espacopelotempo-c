#include <stdio.h>

float espacopelotempo(float velocidade, float tempo, float aceleracao);

int main()
{
    float v, t, a = 0;
    int resposta;

    printf("Velocidade: ");
    scanf("%f", &v);

    printf("Tempo: ");
    scanf("%f", &t);

    printf("Ha aceleracao? (1=Sim 0=Nao): ");
    scanf("%d", &resposta);

    if(resposta == 1) {
        printf("Aceleracao: ");
        scanf("%f", &a);
    }

    printf("Espaco = %.2f\n", espacopelotempo(v, t, a));

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
