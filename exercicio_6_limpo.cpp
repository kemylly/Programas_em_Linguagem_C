#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	float numeros[10];
	float resultado[10];
	int i;
	
	printf ("Digite 10 n�meros:\n ", i, numeros [i]);
	
	for (i = 0; i < 10; i++)
	{
		scanf ("%f", &numeros [i]);
		resultado [i] = numeros [i] * numeros [i];
	}
	
	for (i = 0; i < 10; i++)
	{
		printf ("\nO quadrado do numero %.1f � igual a: %.1f \n", numeros [i], resultado [i]);
	} 
	
	return 0;
}
