#include <stdio.h>
//#include <stdlib.h>
#include <locale.h>
#include <conio.h>
//#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, aumento;
    int tempo;
    char nome[15];
    
    printf("Bem vindo, digite seu nome:\n"); 
    scanf("%s", &nome);
    
    printf("Digite o valor do salario:\n"); 
    scanf("%f", &salario);
    
    printf("Digite o tempo de serviço:\n");
    printf("(Digite apenas numeros!)\n");
    scanf("%d", &tempo);
    
	if(tempo >= 5)
	{
		//acrescenta no salario 20%
		aumento = (salario / 100)*20;
        salario = salario + aumento;
		
		printf("\n%s teve um aumento de 20%% \n", nome);
		printf("O valor do seu salario atual é: %0.2f \n", salario); 
    	
	}
	if(tempo <= 4)
	{
		//acrescenta 10% no salario
		aumento = (salario / 100)*10;
        salario = salario + aumento;
		
		printf("\n%s voce teve um aumento de 10%% \n", nome);
		printf("O valor do seu salario atual é: %0.2f \n", salario); 
	}
	else 
	{
		printf("Erro");
	}
    getch();
    return 0; 
}

