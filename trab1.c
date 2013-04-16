#include <stdio.h>

int main () {
    
	int num;
	printf ("Entre com um valor qualquer\n");
	scanf ("%d",&num);

	if (num < 0 || num > 999) 
	{
		printf ("numero Invalido");
		//condição de número "se menor que zero e maior que 999"
	}
	else 
	{ 
		printf ("\nvalor correto\n");
		//se(senão) número não entrar na condição "valor correto"
	}

	return;            //retorno da função
}
