#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float ladoa, ladob, ladoc, somaa, somab, somac;
     
    printf("Bem vindo. Digite os valores e descubra que tipo de triangulo é!");
	printf("Digite o valor do lado A:\n");
    scanf ("%f", &ladoa);
    
    printf("Digite o valor do lado B:\n");
    scanf ("%f", &ladob);
    
    printf("Digite o valor do lado C:\n");
    scanf ("%f", &ladoc);
    
    //TD = D*ND;
    somaa = ladoc+ladob;
    somab = ladoa+ladoc;
    somac = ladoa+ladob;
    
    if ((ladoa < somaa) || (ladob < somab) || (ladoc < somac))
    {
    	printf("Hmm, isso não parece um triangulo!");
	}
	
	else if (ladoa == ladob)
    {
        if(ladob == ladoc)
        {
        	printf ("Lua\n");
        	printf ("Equilatero");
		}
		else 
		{
			printf ("Ondas\n");
			printf ("Isosceles");
		}
    }
    else if (ladoa == ladoc)
    {
        printf ("Sol\n");
        printf("Isosceles");
    }   
        else if (ladoc == ladob)
        {       
            printf("Mar\n");
            printf("Isosceles");
       }
    else 
    {
    	printf("Escaleno");
    } 
    
    return 0;
    
}

