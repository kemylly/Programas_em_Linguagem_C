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
    
    /* 1 - Alimento n�o-perec�vel
	2, 3 ou 4 - Alimento perec�vel
	5 ou 6 - Vestu�rio
	7 - Higiene pessoal
	8, 9, 10 - Utens�lios dom�sticos
	Qualquer outro c�digo Inv�lido */
    
	if(codigo == 1)
	{
		//1 - Alimento n�o-perec�vel
		printf("\nO produto %s pertence a classifica de Alimento n�o-perec�vel \n", produto);
	}
	else if((codigo == 2) || (codigo == 3) || (codigo == 4))
	{
		//2, 3 ou 4 - Alimento perec�vel
		printf("\nO produto %s pertence a classifica de Alimento perec�vel \n", produto);
	}
	else if((codigo == 5) || (codigo == 6))
	{
		//5 ou 6 - Vestu�rio
		printf("\nO produto %s pertence a classifica de Vestu�rio \n", produto);
	}
	else if(codigo == 7)
	{
		//7 - Higiene pessoal
		printf("\nO produto %s pertence a classifica de Higiene pessoal \n", produto);
	}
	else if((codigo == 8) || (codigo == 9) || (codigo == 10))
	{
		//8, 9, 10 - Utens�lios dom�sticos
		printf("\nO produto %s pertence a classifica de Utens�lios dom�sticos\n", produto);
	}
	else 
	{
		printf("Codigo invalido!");
	}
    getch();
    return 0; 
}

