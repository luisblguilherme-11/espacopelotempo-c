#include <stdio.h>
#include <assert.h>

float espacopelotempo(float velocidade, float tempo, float aceleracao);

int main()
{

    assert(espacopelotempo(80, 2, 0) == 160);
    assert(espacopelotempo(40, 2, 0) == 80);
    assert(espacopelotempo(40, 2, 3) == 86);

    printf("Todos os testes passaram!\n");

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
