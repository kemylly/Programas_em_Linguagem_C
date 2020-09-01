#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int par, laco;
    
    printf("Bem vindo, os numeros pares entre 0 e 20 são:\n"); 
    
    laco = 0;
    par = 0;
    
    while (laco < 21)
	{
		if(par%2 == 0)
		{
			printf ("%d \n", par);
			par++;
			laco++;	
		}
		else
		{
			laco++;
			par++;
		}
	}
	
    //printf("saimos");
    
    return 0;
    
}

