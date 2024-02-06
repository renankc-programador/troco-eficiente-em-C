#include <cs50.h>
#include <stdio.h>
#include <math.h>

float pegar_valor(void);

int main(void)
{
    float troco_em_dolares = pegar_valor();
    int troco_em_centavos = round(troco_em_dolares * 100);
    int moedas = 0;

    while (troco_em_centavos >= 25)
    {
        troco_em_centavos -= 25;
        moedas++;
    }

    while (troco_em_centavos >= 10)
    {
        troco_em_centavos -= 10;
        moedas++;
    }

    while (troco_em_centavos >= 5)
    {
        troco_em_centavos -= 5;
        moedas++;
    }

    while (troco_em_centavos >= 1)
    {
        troco_em_centavos -= 1;
        moedas++;
    }

    printf("%i\n", moedas);
}

float pegar_valor(void)
{
    float troco;
    do
    {
        troco = get_float("Troco devido: ");
    }
    while (troco <= 0);
    return troco;
}
