#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float primeira, segunda, terceira, total, media;
    
    printf("Bem vindo, estou aqui para calcular sua media.\n"); 
    printf("Digite a primeira nota:\n");
    scanf ("%f", &primeira);
    
    printf("Digite a segunda nota:\n");
    scanf ("%f", &segunda);
    
    printf("Digite a terceira nota:\n");
    scanf ("%f", &terceira);
    
    total = primeira+segunda+terceira;
    media = total/3;
    
    if (media >= 7)
    {
        //printf ("Lua"); 
        
        printf("\nParabens, voce foi aprovado. Sua media é de: %0.2f pontos!", media); 
    }
    else if (media < 7)
    {
        //printf ("Sol");
        
        printf("\nOps, parece que voce foi Reprovado!");
        printf("\nTente estudar mais da proxima vez. Sua media é de: %0.2f pontos.", media); 
    }   
    else 
    {
        printf("Ops, aconteceu algo de errado");
    } 
    return 0;
    
}

