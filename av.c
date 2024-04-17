#include <stdio.h>

int main(int argc, char *argv[])
{
	/* pointeur vers le premier argument de la ligne de commande */
	char **arg = argv;

    /* Parcourir les arguments jusqu'a rencontrer un pointeur NULL */

	while (*arg != NULL)
	{
		printf("%s\n", *arg);
		/* afficher l'argument */
		arg++; /* Passer a l'argument suivant */
	}
	return 0;
}
