#include "main.h"

int main(void)
{
	char str[] = "Ma chaine", *result = NULL;

	printf("Voici l'entr�e : %s\n", str);

	revStr(str);

	printf("Voici le resultat : %s\n", str);

	return (0);
}
