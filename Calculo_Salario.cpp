#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, total, TS;
     
    printf("Qual o valor do salario?\n");
    scanf ("%f", &salario);
    
    if (salario <= 280)
    {
        //printf ("Lua"); 
        
        TS = (salario / 100)*20;
        total = TS + salario;
        printf("\nO valor do seu salario era de %0.2f .\n Seu aumento foi de 20%%", salario);
        printf("\nEntao o valor de aumento é %0.2f", TS);
        printf("\nO valor agora do seu salario é: %0.2f", total);
    }
    else if (salario <= 700)
    {
        //printf ("Sol");
        
        TS = (salario / 100)*15;
        total = TS + salario;
        printf("\nO valor do seu salario era de %0.2f .\n Seu aumento foi de 15%%", salario);
        printf("\nEntao o valor de aumento é %0.2f", TS);
        printf("\nO valor agora do seu salario é: %0.2f", total);
    }   
        else if (salario <= 1500)
        {       
            //printf("Mar");
            
            TS = (salario / 100)*10;
            total = TS + salario;
            printf("\nO valor do seu salario era de %0.2f .\n Seu aumento foi de 10%%", salario);
        	printf("\nEntao o valor de aumento é %0.2f", TS);
        	printf("\nO valor agora do seu salario é: %0.2f", total);
        }
        else if (salario > 1500)
        {
        	TS = (salario / 100)*5;
            total = TS + salario;
            printf("\nO valor do seu salario era de %0.2f .\n Seu aumento foi de 5%%", salario);
        	printf("\nEntao o valor de aumento é %0.2f", TS);
        	printf("\nO valor agora do seu salario é: %0.2f", total);
		}
    else 
    {
        printf("Ops, aconteceu algo de errado");
    } 
    return 0;
    
}

