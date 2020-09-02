#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tres, laco;
    
    printf("Bem vindo, os numeros divisiveis por 3 entre 0 e 20 são:\n"); 
    
    laco = 0;
    tres = 0;
    
    while (laco < 21)
	{
		if(tres%3 == 0)
		{
			printf ("%d \n", tres);
			tres++;
			laco++;	
		}
		else
		{
			laco++;
			tres++;
		}
	}
	
    //printf("saimos");
    
    return 0;
    
}

