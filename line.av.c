#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;
	char *token;

	while (1)
	{
		printf("$ "); //sa imprime le prompt
		getline(&buffer, &len, stdin);//lie la ligne et la stock dans le buffer (tampon)
		printf("buffer getline: %s", buffer);//affiche le contenue du tampon
	
		token = strtok(buffer, " ");//divise la string dans buffer en token en delimitant par un espace
		while (token)//boucle sur chaque partie de la string (token)
		{
			printf("buffer strtok: %s\n", token);//affiche chaque token
			token = strtok(NULL," ");//continue jusqu'a tombé sur null
		}
	}
	return (0);
}
