
#include <stdio.h>

void Adivinar_ASCII (char caracter);

int main()
{
	char caracter, decision;
	printf("\nBienvenido a nuestro programa...\n");
	do
	{
		fflush(stdin);			// Elimina buffer del teclado
		printf("Ingrese un caracter\n>>> ");
		scanf("%c", &caracter);
		printf("Ahora deberas adivinar el valor correspondiente en codigo ASCII\n");
		Adivinar_ASCII(caracter);
		printf("Desea jugar nuevamente? [S/N]\n>>> ");
		fflush(stdin);
		scanf("%c", &decision);
		printf("\n");
	} while ((decision == 's') || (decision == 'S'));
	printf("Muchas gracias por probar nuestro programa!\n\n");
	return 0;
}

void Adivinar_ASCII (char caracter)
{
	int ASCII, intentos = 0;
	do
	{
		printf(">>> ");
		scanf("%d", &ASCII);
		intentos++;
		if (caracter < ASCII)
		{
			printf("El valor en la tabla ASCII de %c es MENOR\n", caracter);
		}
		if (caracter > ASCII)
		{
			printf("El valor en la tabla ASCII de %c es MAYOR\n", caracter);
		}
	}
	while (caracter != ASCII);
	printf("Felicitaciones, lo has encontrado! ");
	if (intentos == 1)
	{
		printf("Te ha costado %d intento\n", intentos);
	}
	else
	{
		printf("Te ha costado %d intentos\n", intentos);
	}
	printf("El valor correspondiente de [ %c ]  en la tabla ASCII es %d o 0x%x\n", caracter, ASCII, ASCII);
}
