#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo;
    char produto[30];
    
    printf("Bem vindo, digite o nome do produto:\n"); 
    scanf("%s", &produto);
    
    printf("Digite o codigo do produto:\n"); 
    scanf("%d", &codigo);
    
    /* 1 - Alimento não-perecível
	2, 3 ou 4 - Alimento perecível
	5 ou 6 - Vestuário
	7 - Higiene pessoal
	8, 9, 10 - Utensílios domésticos
	Qualquer outro código Inválido */
    
	if(codigo == 1)
	{
		//1 - Alimento não-perecível
		printf("\nO produto %s pertence a classifica de Alimento não-perecível \n", produto);
	}
	else if((codigo == 2) || (codigo == 3) || (codigo == 4))
	{
		//2, 3 ou 4 - Alimento perecível
		printf("\nO produto %s pertence a classifica de Alimento perecível \n", produto);
	}
	else if((codigo == 5) || (codigo == 6))
	{
		//5 ou 6 - Vestuário
		printf("\nO produto %s pertence a classifica de Vestuário \n", produto);
	}
	else if(codigo == 7)
	{
		//7 - Higiene pessoal
		printf("\nO produto %s pertence a classifica de Higiene pessoal \n", produto);
	}
	else if((codigo == 8) || (codigo == 9) || (codigo == 10))
	{
		//8, 9, 10 - Utensílios domésticos
		printf("\nO produto %s pertence a classifica de Utensílios domésticos\n", produto);
	}
	else 
	{
		printf("Codigo invalido!");
	}
    getch();
    return 0; 
}

