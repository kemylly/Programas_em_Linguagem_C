#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float primeiro, segundo, soma;
    
    printf("Bem vindo, calcaule a soma.\n"); 
    printf("Digite o primeiro valor:\n");
    scanf ("%f", &primeiro);
    
    printf("Digite o segundo valor:\n");
    scanf ("%f", &segundo);
    
    soma = primeiro+segundo;
    
    if (soma > 10)
    {
        //printf ("Lua"); 
        
        printf("\nO resultado da soma é: %0.2f ", soma); 
    }
    else 
    {
        printf("Ops, aconteceu algo de errado");
    } 
    return 0;
    
}

