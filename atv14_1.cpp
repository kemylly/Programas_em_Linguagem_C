#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int velocidade, limite, calculo;
     
    printf("Qual velocidade em km/h o carro estava?\n");
    scanf ("%d", &velocidade);
    
    printf("Qual a velocidade em km/h maxima permitida?\n");
    scanf ("%d", &limite);
    
    if (velocidade > limite)
    {
        calculo = velocidade - limite;
        
        if (calculo <= 10)
        {
        	//printf ("Lua"); 
        	//printf("\nSua velocidade era de %d", velocidade);	
        	printf("Voce estava %d km/h acima da velocidade.\n", calculo);
        	printf ("Sua multa é de 50 reais.");
		}
		else if (calculo <= 30)
		{
			//printf ("Sol");
			printf("Voce estava %d km/h acima da velocidade.\n", calculo);
			printf("Sua multa é de 100 reais.");
		}
		else if ( calculo > 31)
		{
			//printf("Mar");
			printf("Voce estava %d km/h acima da velocidade.\n", calculo);
			printf("Sua multa é de 300 reais");
		}
    }
    else 
    {
        printf("Que bom voce não estava acima da velocidae permtida.");
    } 
    return 0;
    
}

