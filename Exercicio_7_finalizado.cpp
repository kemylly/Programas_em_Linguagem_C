#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");

	int numeros[10];
	int impares[10];
	int n, i=0, k=0;
	// n = todos os numeros e for
	// i = numeros impares e contagem
	// k = numeros impares e for

	// Não consegui com que o sistema gerasse numeros aleatorios sozinhos

	printf ("Digite 10 números entre 0 e 50:\n");
	for (n = 0; n < 10; n++)
	{
		scanf ("%d", &numeros[n]);
		if((numeros[n])<0 || (numeros[n]>50))
		{
			printf ("Digite 10 números entre 0 e 50:\n");
			scanf ("%d", &numeros[n]);	
		}
	}
	
	for (n = 0; n < 10; n++)
	{
		if(numeros[n]%2 == 1)
		{
			//impar
			impares[i++] = numeros[n];
		}
		else
		{
			//par
			impares[i++] = 0;
		}
	}
	
    {
    printf ("\ndigitados / Ímpares:\n\n");
	k=0;
    for (n = 0; n < 10; n++) 
	{
            if (impares[n] == 0) 
			{
            	printf("Os números são: %d / vazio\n", numeros[n]);
            }
            else
            {
            	printf("Os números são: %d / %d\n", numeros[n], impares[n]);
			}
            	
	}
    }

	return 0;
}


