#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ano, mes, dia, dias, anocont, mescont, hoje;
    
	//Quantidade dias que estou considerando que teve esse ano.
	//O meses de 2020 estao em formato de 30 dias.
	//E estou considerando o dia de hoje 11/05/2020
    hoje = 365-131; //Total de dias vividos em 2020.
    
    printf("Bem vindo, digite o ano em que voce nasceu: (Formarto de 4 numeros ex: 2001 )\n"); 
    scanf("%d", &ano);
    
    printf("Digite (em numero) o mes que voce nasceu:\n"); 
    scanf("%d", &mes);
    
    printf("Digite (em numero) o dia que voce nasceu:\n"); 
    scanf("%d", &dia);
    
    ano = 2020 - ano;
    anocont = 365*ano;
    mescont = mes*30;
    
    dias = anocont+mescont;
    dias = dias+dia;
    dias = dias-hoje;

	printf("\nSua idade em dias é: %d", dias);
	
    return 0; 
}

