#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float TV, Sbruto, Sbase, comissao;
    
    Sbase = 1200;
    
    printf("Digite o total vendido:\n"); 
    scanf("%f", &TV);
    
	if(TV > 2000)
	{
		//Para ganhar comissao de 10%
		
		comissao = (TV / 100)*10;
        Sbruto = Sbase + comissao;
        
		printf("\nValor do seu salario Bruto: %0.2f \n", Sbruto);
		printf("Valor da sua comissao: %0.2f", comissao);
	}
	else
	{
		//sem comissao
		printf("\nVoce não atingiu a meta. Portanto nao recebeu comissao.\n");
		printf("Valor do seu salario Bruto: %0.2f \n", Sbase);
	}
    return 0; 
}

