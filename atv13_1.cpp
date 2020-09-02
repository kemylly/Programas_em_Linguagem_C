#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int fatorial, reserva;
    
    printf("Bem vindo, o numero fatorial de 5 é:\n"); 
    
    fatorial = 5*4*3*2*1;
    
    printf ("5! = %d", fatorial);
    
    return 0;
    
}

