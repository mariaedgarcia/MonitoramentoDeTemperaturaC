#include <stdio.h>

int main()
{
    int temperatura[10];
    int i;
    int temp_minima;
    int temp_maxima;
    int soma;
    
    for (int i = 0; i < 10; i++){
        printf("Digite a %d° temperatura em °C: ", i+1);
        scanf ("%d", &temperatura[i]);
    }
    
    printf("\nInforme o limite de temperatura mínima: ");
    scanf ("%d", &temp_minima);
    
    printf("Informe o limite de temperatura máxima: ");
    scanf ("%d", &temp_maxima);
    
    for (i = 0; i < 10; i++) {
        if ( temperatura[i] >= temp_minima && temperatura[i] <= temp_maxima){
                printf("\nA temperatura que esta entre os valores informados são: %d", temperatura[i]);
                soma++;
        }
    }
    printf("\n");
    printf("A quantidade de temperaturas que estão dentro dessa faixa são: %d", soma);
    
    return 0;
}