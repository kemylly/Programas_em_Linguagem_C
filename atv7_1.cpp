#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int mes, divisao, calculo;
    
	printf("Descubra quantos dias tem o mes escolhido.\n");
	printf(" janeiro=1 \n fevereiro=2 \n marco=3 \n abril=4 \n maio=5 \n junho=6 \n");
	printf(" julho=7 \n agosto=8 \n setembro=9 \n outubro=10 \n novembro=11 \n dezembro=12\n");
    printf("Digite um numero entre 1 a 12:\n");
    scanf ("%d", &mes);
    
    //printf("Qual a velocidade em km/h maxima permitida?\n");
    //scanf ("%d", &limite);
    
    if ((mes == 1) || ( mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12))
    {
       //printf("Lua");
	   printf ("Mes escolhido tem 31 dias.");
	}
		else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))
		{
			//printf ("Sol");
			printf("O mes escolhido tem 30 dias");
		}
		else if (mes == 2)
		{
			//printf("Mar");
			//printf("O mes escolhido é fevereiro");
			printf ("Digite o ano:");
			scanf("%d", &divisao);
			
			if(divisao%4 == 0)
			{
				//("bis");
				printf("\nAno bissexto.");
				printf("\nO mes escolhido tem 29 dias.");
			}
			else
			{
				printf("O mes escolhido tem 28 dias.");
			}
		}
    else 
    {
        printf("Ops, aconteceu algo de errado.");
    } 
    
    return 0;
    
}

